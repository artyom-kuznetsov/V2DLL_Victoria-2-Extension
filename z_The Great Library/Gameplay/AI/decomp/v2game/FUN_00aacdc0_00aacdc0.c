// FUN_00aacdc0 @ 00aacdc0 body=[[00aacdc0, 00aace96]]


void FUN_00aacdc0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 *puVar5;
  bool bVar6;
  
  puVar4 = (undefined4 *)(*(undefined4 **)(in_ECX + 4))[1];
  bVar6 = true;
  cVar1 = *(char *)((int)puVar4 + 0x15);
  puVar2 = *(undefined4 **)(in_ECX + 4);
  while (cVar1 == '\0') {
    if ((char)param_3 == '\0') {
      iVar3 = type_info::before(*(type_info **)(param_2 + 0xc),(type_info *)puVar4[3]);
      bVar6 = iVar3 != 0;
    }
    else {
      iVar3 = type_info::before((type_info *)puVar4[3],*(type_info **)(param_2 + 0xc));
      bVar6 = iVar3 == 0;
    }
    if (bVar6) {
      puVar5 = (undefined4 *)*puVar4;
    }
    else {
      puVar5 = (undefined4 *)puVar4[2];
    }
    puVar2 = puVar4;
    puVar4 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x15);
  }
  param_3 = puVar2;
  if (bVar6) {
    if (puVar2 == (undefined4 *)**(int **)(in_ECX + 4)) {
      puVar4 = (undefined4 *)FUN_00aacb90(&param_3,1,puVar2,param_2);
      *param_1 = *puVar4;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_00832110();
  }
  iVar3 = type_info::before((type_info *)param_3[3],*(type_info **)(param_2 + 0xc));
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)FUN_00aacb90(&param_3,bVar6,puVar2,param_2);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

