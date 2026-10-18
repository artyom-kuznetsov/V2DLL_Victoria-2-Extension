// FUN_009c4b30 @ 009c4b30 body=[[009c4b30, 009c4b3d]]


void FUN_009c4b30(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_ECX;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*in_ECX + 0x34);
  *(undefined1 *)((int)in_ECX + 0xf6) = 0;
                    /* WARNING: Could not recover jumptable at 0x009c4b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

