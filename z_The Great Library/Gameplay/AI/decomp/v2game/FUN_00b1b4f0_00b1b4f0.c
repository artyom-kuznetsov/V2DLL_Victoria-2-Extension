// FUN_00b1b4f0 @ 00b1b4f0 body=[[00b1b4f0, 00b1b58c] [00b1b590, 00b1b5de]]


void FUN_00b1b4f0(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int *in_ECX;
  
  *(undefined2 *)(in_ECX + 3) = 0x19;
  uVar2 = in_ECX[1];
  *(undefined2 *)(in_ECX + 7) = 0x19;
  if (((uVar2 != 0x102) && (in_ECX[1] = 0x102, uVar2 < 0x102)) && ((uint)in_ECX[2] < 0x102)) {
    if (*in_ECX == 0) {
      iVar1 = (*(code *)PTR_FUN_00f01b08)(0x1020,0x19,4,2,0,0xffffffff);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
    }
    *in_ECX = iVar1;
    in_ECX[2] = 0x102;
  }
  if ((uint)in_ECX[2] < 0x203) {
    if (*in_ECX == 0) {
      iVar1 = (*(code *)PTR_FUN_00f01b08)(0x2030,(short)in_ECX[3],4,2,0,0xffffffff);
    }
    else {
      iVar1 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
    }
    *in_ECX = iVar1;
    in_ECX[2] = 0x203;
  }
  sVar3 = 0;
  uVar2 = 0;
  do {
    *(short *)(uVar2 + 10 + *in_ECX) = sVar3;
    *(undefined4 *)(uVar2 + *in_ECX) = 0;
    *(undefined2 *)(uVar2 + 4 + *in_ECX) = 0xffff;
    *(undefined2 *)(uVar2 + 6 + *in_ECX) = 0xffff;
    *(undefined2 *)(uVar2 + 8 + *in_ECX) = 0xffff;
    *(undefined1 *)(uVar2 + 0xc + *in_ECX) = 1;
    uVar2 = uVar2 + 0x10;
    sVar3 = sVar3 + 1;
  } while (uVar2 < 0x1020);
  in_ECX[8] = -1;
  *(undefined4 *)(*in_ECX + 0x1010) = 1;
  return;
}

