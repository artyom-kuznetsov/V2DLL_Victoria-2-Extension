// FUN_00aad110 @ 00aad110 body=[[00aad110, 00aad1a9]]


undefined4 * FUN_00aad110(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar5 = (undefined4 *)(*(undefined4 **)(in_ECX + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x15);
  puVar2 = *(undefined4 **)(in_ECX + 4);
  while (cVar1 == '\0') {
    iVar3 = type_info::before((type_info *)puVar5[3],(type_info *)*param_1);
    if (iVar3 == 0) {
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0x15);
  }
  if ((puVar2 != *(undefined4 **)(in_ECX + 4)) &&
     (iVar3 = type_info::before((type_info *)*param_1,(type_info *)puVar2[3]), iVar3 == 0)) {
    return puVar2 + 4;
  }
  local_c = *param_1;
  local_8 = 0;
  uVar4 = FUN_00aa8280(&local_c);
  FUN_00aacf30(&param_1,puVar2,uVar4);
  return param_1 + 4;
}

