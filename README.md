# วิธีรัน C/C++ ใน Visual Studio Code

## ( requires 64 bit Windows 8.1 or newer. )

### ลง **MinGW**
1. [Download](https://github.com/msys2/msys2-installer/releases/download/2023-05-26/msys2-x86_64-20230526.exe "Download")
2. กดรัน MSYS2   เสร็จแล้วจะมีจอ Terminal ขึ้นมา ![](https://cdn.discordapp.com/attachments/816608736042811401/1193577057934917725/image.png?ex=65ad3842&is=659ac342&hm=6f7915e85797b0832583910b60eeedff416f264c8cfadb5888187a0ee4d5f5d4&)
3. พิมพ์คำสั่ง `pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain`
4. กด Enter เพื่อเลือก Default 


### Set Environment
1. หา Path ที่ลง MinGW ของผมลงที่ไดรฟ์ C ก็จะเป็นแบบนี้ `C:\msys64\ucrt64\bin`
2. เปิด Environment Variables
   ![](https://cdn.discordapp.com/attachments/816608736042811401/1193580890765414572/image.png?ex=65ad3bd4&is=659ac6d4&hm=661167a050c59c0cdd0af17b01c98ec656dd7e8fb3d642fe9a1baab530f82748&)
3. ช่องบนเป็นตั้งค่าของ user ที่ใช้อยู่ตอนนี้ ส่วนด้านล่างคือตั้งค่าให้ทุก user ในคอมเลย
   ![](https://cdn.discordapp.com/attachments/816608736042811401/1193581594091462666/image.png?ex=65ad3c7b&is=659ac77b&hm=280be80cecd793d9d039c4c32294470603fd42af077daef3bf05dc9cc4e361be&)
   เลือก Path แล้วกด Edit
4. กด New แล้ววาง Path จากข้อ (1.)
   ![](https://cdn.discordapp.com/attachments/816608736042811401/1193583420178182226/image.png?ex=65ad3e2f&is=659ac92f&hm=fb217bf8409bdac027db324eb9d7e856dec651630eb5171858c7e5c85ab81a50&)
5. กด ok ทั้งหมดได้เลย
