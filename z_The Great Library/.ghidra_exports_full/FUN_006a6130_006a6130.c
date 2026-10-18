// FUN_006a6130 @ 006a6130 body=[[006a6130, 006a6151]]


undefined4 FUN_006a6130(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006a6150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 4) + 0x20) + 0x18) + 0x94))();
  return uVar1;
}

