// FUN_00ad6210 @ 00ad6210 body=[[00ad6210, 00ad624d] [00ad6250, 00ad62a0]]


void FUN_00ad6210(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_2[1];
  uVar1 = *(uint *)(in_ECX + 0x84);
  if (((uVar1 != uVar3) && (param_2[1] = uVar1, uVar3 < uVar1)) && ((uint)param_2[2] < uVar1)) {
    FUN_00ad8720(uVar1);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar3 * 4) + 4);
      FID_conflict__memcpy((void *)(*param_2 + iVar4),(void *)(*param_1 + iVar4),0x40);
      if (iVar2 != -1) {
        FUN_009c0960(iVar2 * 0x40 + *param_2);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x40;
    } while (uVar3 < uVar1);
  }
  return;
}

