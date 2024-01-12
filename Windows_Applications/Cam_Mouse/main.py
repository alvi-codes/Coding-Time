# CREDITS:
# The code in this file has been taken from 'https://www.youtube.com/watch?v=vJWzH_2F64g&t=115s&ab_channel=ProgrammingHero' for learning and development purposes.
# Owner of the tutorial video is the channel named Programming Hero on YouTube.


import cv2
import mediapipe
import pyautogui
import math
import time

video = cv2.VideoCapture(0)
detector = mediapipe.solutions.hands.Hands()
draw_points = mediapipe.solutions.drawing_utils
screen_width, screen_height = pyautogui.size()

INDEX_FINGER_TIP_y = 0
INDEX_FINGER_MCP_y = 0
THUMB_TIP_y = 0

while (1):
    _, frame = video.read()
    frame = cv2.flip(frame, 1)
    frame_height, frame_width, _ = frame.shape
    rgb_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2RGB)
    output = detector.process(rgb_frame)
    hands = output.multi_hand_landmarks

    if hands: 
        for hand in hands:
            draw_points.draw_landmarks(frame, hand)
            landmarks = hand.landmark
            for id, landmark in enumerate(landmarks):
                    x = int(landmark.x * frame_width)
                    y = int(landmark.y * frame_height)
                    if id == 8:
                         cv2.circle(img=frame, center=(x,y), radius=20, color=(0, 255, 255))
                         INDEX_FINGER_TIP_x = screen_width/frame_width * x
                         INDEX_FINGER_TIP_y = screen_height/frame_height * y
                         pyautogui.moveTo(INDEX_FINGER_TIP_x, INDEX_FINGER_TIP_y)
                    
                    if id == 5:
                         cv2.circle(img=frame, center=(x,y), radius=20, color=(70, 50, 100))
                         INDEX_FINGER_MCP_x = screen_width/frame_width * x
                         INDEX_FINGER_MCP_y = screen_height/frame_height * y

                    if id == 4:
                         cv2.circle(img=frame, center=(x,y), radius=20, color=(180, 100, 0))
                         THUMB_TIP_x = screen_width/frame_width * x
                         THUMB_TIP_y = screen_height/frame_height * y
                         if abs(THUMB_TIP_y - INDEX_FINGER_MCP_y) < 20:
                              pyautogui.click()
                              pyautogui.sleep(1)

    cv2.imshow('Cam_Mouse', frame)
    cv2.waitKey(1)