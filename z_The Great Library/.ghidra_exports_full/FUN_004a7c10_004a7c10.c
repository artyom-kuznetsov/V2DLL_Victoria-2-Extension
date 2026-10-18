// FUN_004a7c10 @ 004a7c10 body=[[004a7c10, 004a7c24]]


uint FUN_004a7c10(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) == 0) {
    return in_EAX & 0xffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x004a7c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)**(undefined4 **)(in_ECX + 8) + 8))();
  return uVar1;
}

