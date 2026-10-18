// FUN_006799d0 @ 006799d0 body=[[006799d0, 00679a05]]


void FUN_006799d0(void)

{
  char cVar1;
  int unaff_ESI;
  
  if (0 < (int)(*(int *)(unaff_ESI + 0xd84) - *(int *)(unaff_ESI + 0xd80) & 0xfffffffcU)) {
    cVar1 = (**(code **)(*(int *)**(undefined4 **)(unaff_ESI + 0xd80) + 0x1c))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00679a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)**(undefined4 **)(unaff_ESI + 0xd80) + 0x2c))();
      return;
    }
  }
  return;
}

