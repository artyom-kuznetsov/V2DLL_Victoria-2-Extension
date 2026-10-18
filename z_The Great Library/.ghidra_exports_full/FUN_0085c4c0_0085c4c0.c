// FUN_0085c4c0 @ 0085c4c0 body=[[0085c4c0, 0085c5a0]]


void FUN_0085c4c0(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 uint param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_EAX;
  undefined4 *puVar3;
  
  puVar2 = param_3;
  if ((param_5 != *(uint *)(in_EAX + 0xc)) && (param_3 != (undefined4 *)0x0)) {
    piVar1 = *(int **)(*(int *)(param_2 + 8) + (param_5 % *(uint *)(param_2 + 4)) * 4);
joined_r0x0085c4ef:
    if (piVar1 != (int *)0x0) {
      puVar3 = (undefined4 *)*piVar1;
      if (puVar3[3] != param_5) goto code_r0x0085c4f8;
      param_3 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        for (piVar1 = (int *)*param_1; (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != puVar3));
            piVar1 = (int *)piVar1[2]) {
        }
        FUN_005f2ae0(piVar1);
        puVar3[4] = puVar3[4] + (int)puVar2;
        if ((int)puVar3[4] < 1) {
          FUN_00860150();
          (**(code **)*puVar3)(1);
          return;
        }
        goto LAB_0085c589;
      }
    }
    if (0 < (int)puVar2) {
      puVar3 = (undefined4 *)FUN_00aae9af(0x14);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = 0x18d;
        *puVar3 = CCountryValue::vftable;
        puVar3[2] = param_4;
        puVar3[3] = param_5;
        puVar3[4] = puVar2;
      }
      param_3 = puVar3;
      FUN_00860100(puVar3);
LAB_0085c589:
      if (puVar3 != (undefined4 *)0x0) {
        FUN_008602c0(param_1,&param_3);
      }
    }
  }
  return;
code_r0x0085c4f8:
  piVar1 = (int *)piVar1[1];
  goto joined_r0x0085c4ef;
}

