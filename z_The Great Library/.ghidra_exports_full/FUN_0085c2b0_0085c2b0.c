// FUN_0085c2b0 @ 0085c2b0 body=[[0085c2b0, 0085c347]]


void FUN_0085c2b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  iVar2 = (int)param_1;
  piVar1 = (int *)*in_ECX;
  do {
    if (piVar1 == (int *)0x0) {
      puVar3 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
        param_1 = puVar3;
      }
      else {
        puVar3[1] = 0x18d;
        *puVar3 = CProvinceValue::vftable;
        puVar3[2] = in_EAX;
        puVar3[3] = iVar2;
        param_1 = puVar3;
      }
      goto LAB_0085c320;
    }
    puVar3 = (undefined4 *)*piVar1;
    piVar1 = (int *)piVar1[2];
  } while (puVar3[2] != in_EAX);
  puVar3[3] = puVar3[3] + (int)param_1;
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != puVar3));
      piVar1 = (int *)piVar1[2]) {
  }
  param_1 = puVar3;
  FUN_005f2ae0(piVar1);
LAB_0085c320:
  if (0 < (int)puVar3[3]) {
    FUN_00853e20(in_ECX,&param_1);
    return;
  }
  (**(code **)*puVar3)(1);
  return;
}

