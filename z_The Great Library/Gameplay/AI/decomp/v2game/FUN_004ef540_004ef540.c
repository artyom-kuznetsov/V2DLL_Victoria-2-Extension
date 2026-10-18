// FUN_004ef540 @ 004ef540 body=[[004ef540, 004ef669]]


void FUN_004ef540(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0x6e6) {
    param_2 = 0;
    iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
    if (iVar2 == 0) {
      FUN_009a1140();
    }
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4);
    return;
  }
  if (param_2 == 0x840) {
    param_2 = 0;
    iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",&param_2);
    if (iVar2 == 0) {
      FUN_009a1140();
    }
    *(undefined4 *)(in_ECX + 8) =
         *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_2 * 4) + 0x188);
    return;
  }
  if (param_2 == 0xa94) {
    piVar1 = (int *)(in_ECX + 0x10);
    FUN_004f27d0(param_1,piVar1);
    iVar2 = 0;
    if (0 < (int)(*(int *)(in_ECX + 0x14) - *piVar1 & 0xfffffff0U)) {
      iVar3 = 0;
      do {
        if (*(int *)(*piVar1 + 0xc + iVar3) < 1) {
          FUN_004f26f0(piVar1,&param_1,iVar3 + *piVar1);
        }
        else {
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x10;
        }
      } while (iVar2 < *(int *)(in_ECX + 0x14) - *piVar1 >> 4);
    }
    FUN_004ed710(in_ECX);
    return;
  }
  FUN_009a0f40();
  return;
}

