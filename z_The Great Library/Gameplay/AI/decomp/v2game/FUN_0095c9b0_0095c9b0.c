// FUN_0095c9b0 @ 0095c9b0 body=[[0095c9b0, 0095ca39]]


void FUN_0095c9b0(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((in_ECX[2] != 0) || (in_ECX[3] != 0)) {
    (**(code **)(*in_ECX + 0x18))(in_ECX + 2);
  }
  iVar1 = in_ECX[0x9c];
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 0xe) = 0;
  if (iVar1 < 0) {
    FUN_009677a0(in_ECX);
    return;
  }
  if (0 < iVar1) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
    uStack_10 = *(undefined4 *)(iVar1 + 0x1c);
    uStack_c = *(undefined4 *)(iVar1 + 0x20);
    FUN_00967880(in_ECX,&uStack_10);
  }
  return;
}

