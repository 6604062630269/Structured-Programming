# วิธีรัน C/C++ ใน Visual Studio Code

## ( requires 64 bit Windows 8.1 or newer. )

### ลง **MinGW**
1. [Download](https://github.com/msys2/msys2-installer/releases/download/2023-05-26/msys2-x86_64-20230526.exe "Download")
2. กดรัน MSYS2   เสร็จแล้วจะมีจอ Terminal ขึ้นมา ![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/80116bf0-bcb4-432f-b77f-462927cbcb9f)
3. พิมพ์คำสั่ง `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`
4. กด Enter เพื่อเลือก Default 


### Set Environment
1. หา Path ที่ลง MinGW ของผมลงที่ไดรฟ์ C ก็จะเป็นแบบนี้ `C:\msys64\ucrt64\bin`
2. เปิด Environment Variables ![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/c89100b4-84f8-4d98-96af-9c321f1074f1)
3. ช่องบนเป็นตั้งค่าของ user ที่ใช้อยู่ตอนนี้ ส่วนด้านล่างคือตั้งค่าของทุก user ในคอม ![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/65f63b12-c013-4543-9fb3-bd68fa416ff5)
4. เลือก Path แล้วกด Edit
5. กด New แล้ววาง Path จากข้อ (1.) ![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/633b6a78-5fff-42ae-ba99-0c59aa3170e1)
6. กด ok ทั้งหมดได้เลย


### ตั้งค่า Visual Studio Code
#### Setting
![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/6812844b-c363-4e7f-9a46-f698e1321c09)
#### Extension
![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/a98ce604-23f6-4c97-a152-fd37c147be90)
![image](https://github.com/6604062630269/Structured-Programming/assets/152472539/e226030d-062a-4af4-8a95-1b857d3e8673)
