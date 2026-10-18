// FUN_00658e00 @ 00658e00 body=[[00658e00, 00658e90]]


void FUN_00658e00(int *param_1,char param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  if (((param_2 != '\0') || (*(char *)(DAT_012588e8 + 0xd11) == '\0')) ||
     (*(char *)(*(int *)(DAT_012588e8 + 0xb24) + 0x70) != '\0')) {
    if (param_1 != (int *)0x0) {
      for (piVar1 = (int *)in_ECX[0x580]; (piVar1 != (int *)0x0 && ((int *)*piVar1 != param_1));
          piVar1 = (int *)piVar1[2]) {
      }
      FUN_005f2ae0(piVar1);
      pcVar2 = *(code **)(*param_1 + 0x14);
      *(undefined1 *)(param_1 + 1) = 0;
      (*pcVar2)();
      return;
    }
    puVar3 = (undefined4 *)in_ECX[0x580];
    while (puVar3 != (undefined4 *)0x0) {
      uVar4 = *puVar3;
      puVar3 = (undefined4 *)puVar3[2];
      (**(code **)(*in_ECX + 0xa0))(uVar4,0);
    }
  }
  return;
}

