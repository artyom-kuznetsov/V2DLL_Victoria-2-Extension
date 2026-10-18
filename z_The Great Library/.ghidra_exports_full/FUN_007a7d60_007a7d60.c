// FUN_007a7d60 @ 007a7d60 body=[[007a7d60, 007a7ddb]]


void FUN_007a7d60(void)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x3b8) + 0x18) + 0x38))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x3bc) + 0x18) + 0x38))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x398) + 0x18) + 0x34))();
  if (*(int *)(in_ECX + 0x3ac) != 0) {
    FUN_007a2480(*(int *)(in_ECX + 0x3ac));
  }
  iVar1 = *(int *)(in_ECX + 0x3b0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x4c) + 0x18) + 0x34))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x007a7dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x100) + 0x18) + 0x34))();
    return;
  }
  return;
}

