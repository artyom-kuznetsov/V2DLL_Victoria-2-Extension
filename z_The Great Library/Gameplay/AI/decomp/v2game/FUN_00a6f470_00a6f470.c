// FUN_00a6f470 @ 00a6f470 body=[[00a6f470, 00a6f54d]]


void FUN_00a6f470(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 == 0xb8) {
    switch(*(undefined4 *)(param_1 + 0x228)) {
    case 0xb9:
      *(undefined4 *)(in_ECX + 8) = 1;
      return;
    case 0xba:
      *(undefined4 *)(in_ECX + 8) = 2;
      return;
    case 0xbb:
      *(undefined4 *)(in_ECX + 8) = 3;
      return;
    case 0xbc:
      *(undefined4 *)(in_ECX + 8) = 7;
      return;
    case 0x129:
      *(undefined4 *)(in_ECX + 8) = 6;
      return;
    case 0x12a:
      *(undefined4 *)(in_ECX + 8) = 5;
      return;
    case 299:
      *(undefined4 *)(in_ECX + 8) = 4;
      return;
    case 0x16b:
      *(undefined4 *)(in_ECX + 8) = 8;
      return;
    case 0x16c:
      *(undefined4 *)(in_ECX + 8) = 9;
      return;
    case 0x16d:
      *(undefined4 *)(in_ECX + 8) = 10;
      return;
    case 0x16e:
      *(undefined4 *)(in_ECX + 8) = 0xb;
      return;
    case 0x16f:
      *(undefined4 *)(in_ECX + 8) = 0xc;
      return;
    case 0x170:
      *(undefined4 *)(in_ECX + 8) = 0xd;
    }
  }
  else if (param_2 == 0x1a3) {
    FUN_009a1bb0(in_ECX + 0x18);
    return;
  }
  return;
}

