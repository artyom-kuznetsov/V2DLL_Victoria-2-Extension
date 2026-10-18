// FUN_00aaceb0 @ 00aaceb0 body=[[00aaceb0, 00aacf2d]]


void FUN_00aaceb0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)(*(undefined4 **)(in_ECX + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x15);
  puVar2 = *(undefined4 **)(in_ECX + 4);
  while (cVar1 == '\0') {
    iVar3 = type_info::before((type_info *)puVar5[3],(type_info *)*param_2);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x15);
  }
  if ((puVar2 != *(undefined4 **)(in_ECX + 4)) &&
     (iVar3 = type_info::before((type_info *)*param_2,(type_info *)puVar2[3]), iVar3 == 0)) {
    *param_1 = puVar2;
    return;
  }
  *param_1 = *(undefined4 *)(in_ECX + 4);
  return;
}

