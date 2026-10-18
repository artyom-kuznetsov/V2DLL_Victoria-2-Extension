// FUN_00855550 @ 00855550 body=[[00855550, 00855581]]


void FUN_00855550(void)

{
  code *pcVar1;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0xc0);
  *(undefined1 *)((int)in_ECX + 0x3d) = 1;
  (*pcVar1)();
  if ((int *)in_ECX[0x10] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x10] + 300))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00855580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xc4))();
  return;
}

