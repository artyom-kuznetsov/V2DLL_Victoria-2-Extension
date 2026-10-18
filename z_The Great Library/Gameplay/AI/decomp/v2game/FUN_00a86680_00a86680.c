// FUN_00a86680 @ 00a86680 body=[[00a86680, 00a866c2]]


void FUN_00a86680(void)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x74) + 0x2c);
  *(undefined1 *)(in_ECX + 0x4f) = 0;
  puVar3 = (undefined4 *)(*pcVar1)();
  for (piVar2 = (int *)*puVar3; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*(int *)(*piVar2 + 0x1c) + 0x30))();
  }
                    /* WARNING: Could not recover jumptable at 0x00a866c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0xb8) + 0x38))();
  return;
}

