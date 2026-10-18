// FUN_00a8b6c0 @ 00a8b6c0 body=[[00a8b6c0, 00a8b6f8]]


void FUN_00a8b6c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x38) != '\0') {
    puVar1 = *(undefined4 **)(in_ECX + 0x58);
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar2 + 4))(param_1,param_2);
    }
  }
  return;
}

