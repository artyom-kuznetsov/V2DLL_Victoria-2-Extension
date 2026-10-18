// FUN_00a36990 @ 00a36990 body=[[00a36990, 00a369f9]]


undefined4 * FUN_00a36990(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  if (in_EAX != param_1) {
    iVar2 = in_EAX + 0x20;
    do {
      *param_2 = *(undefined4 *)(iVar2 + -0x20);
      FUN_00408ed0(iVar2 + -0x1c,0,0xffffffff);
      FUN_009beeb0(iVar2);
      *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(iVar2 + 0x10);
      param_2[0xd] = *(undefined4 *)(iVar2 + 0x14);
      FUN_00a36ac0(param_2 + 0xe);
      *(undefined1 *)(param_2 + 0x14) = *(undefined1 *)(iVar2 + 0x30);
      iVar1 = iVar2 + 0x34;
      param_2 = param_2 + 0x15;
      iVar2 = iVar2 + 0x54;
    } while (iVar1 != param_1);
  }
  return param_2;
}

