// FUN_00ae0640 @ 00ae0640 body=[[00ae0640, 00ae06ab]]


void FUN_00ae0640(int *param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  int iVar3;
  
  if (param_1 == in_ECX) {
    return;
  }
  uVar2 = 0;
  in_ECX[1] = 0;
  *(short *)(in_ECX + 3) = (short)param_1[3];
  uVar1 = param_1[1];
  in_ECX[1] = uVar1;
  if ((uint)in_ECX[2] < uVar1) {
    FUN_00ad8720(uVar1 + 1);
  }
  if (in_ECX[1] != 0) {
    iVar3 = 0;
    do {
      if ((void *)(*in_ECX + iVar3) != (void *)0x0) {
        FID_conflict__memcpy((void *)(*in_ECX + iVar3),(void *)(*param_1 + iVar3),0x40);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x40;
    } while (uVar2 < (uint)in_ECX[1]);
    return;
  }
  return;
}

