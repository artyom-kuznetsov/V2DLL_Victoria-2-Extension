// FUN_00448f50 @ 00448f50 body=[[00448f50, 00449056]]


void FUN_00448f50(int param_1)

{
  lconv *plVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  _Cvtvec *unaff_EDI;
  undefined1 *puVar7;
  char *pcVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a500;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  plVar1 = _localeconv();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_8 = 0;
  puVar7 = &DAT_00ded94d;
  __Getcvt(unaff_EDI);
  puVar2 = (undefined1 *)FUN_00aad56b(1);
  puVar4 = puVar2;
  for (iVar6 = 1; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar7;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  __Getcvt(unaff_EDI);
  pcVar3 = (char *)FUN_00aad56b(6);
  pcVar8 = "false";
  pcVar5 = pcVar3;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pcVar5 = *pcVar8;
    pcVar5 = pcVar5 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(char **)(param_1 + 0x10) = pcVar3;
  __Getcvt(unaff_EDI);
  puVar7 = &DAT_00df87f0;
  puVar2 = (undefined1 *)FUN_00aad56b(5);
  puVar4 = puVar2;
  for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar4 = *puVar7;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 **)(param_1 + 0x14) = puVar2;
  __Getcvt(unaff_EDI);
  *(char *)(param_1 + 0xc) = *plVar1->decimal_point;
  __Getcvt(unaff_EDI);
  *(char *)(param_1 + 0xd) = *plVar1->thousands_sep;
  __Getcvt(unaff_EDI);
  *(undefined1 *)(param_1 + 0xc) = 0x2e;
  __Getcvt(unaff_EDI);
  *(undefined1 *)(param_1 + 0xd) = 0x2c;
  ExceptionList = local_10;
  return;
}

