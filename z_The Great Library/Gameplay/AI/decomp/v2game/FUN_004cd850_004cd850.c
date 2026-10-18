// FUN_004cd850 @ 004cd850 body=[[004cd850, 004cd87f]]


void FUN_004cd850(void)

{
  int *piVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_EAX;
  int *unaff_EDI;
  
  for (piVar1 = (int *)*in_EAX; (piVar1 != (int *)0x0 && ((int *)*piVar1 != unaff_EDI));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  UNRECOVERED_JUMPTABLE = *(code **)(*unaff_EDI + 0x14);
  *(undefined1 *)(unaff_EDI + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x004cd87e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

