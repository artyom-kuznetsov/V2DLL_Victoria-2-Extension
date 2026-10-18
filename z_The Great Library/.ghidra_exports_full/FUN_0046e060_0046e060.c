// FUN_0046e060 @ 0046e060 body=[[0046e060, 0046e09e]]


void FUN_0046e060(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x38))();
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + 0x40);
  if ((((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) &&
      (*(char *)(iVar1 + 0x67) != '\0')) && (iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0046e09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    return;
  }
  return;
}

