// FUN_0093d5b0 @ 0093d5b0 body=[[0093d5b0, 0093d5fe] [0093d602, 0093d612] [0093d61f, 0093d626]]


void FUN_0093d5b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0x21) != '\0') {
    return;
  }
  FUN_0093d5b0(*(undefined4 *)(param_1 + 8));
  puVar2 = *(undefined4 **)(param_1 + 0x10);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x14);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0x10) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x10));
}

