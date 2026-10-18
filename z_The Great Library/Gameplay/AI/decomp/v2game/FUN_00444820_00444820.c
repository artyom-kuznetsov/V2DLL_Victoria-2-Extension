// FUN_00444820 @ 00444820 body=[[00444820, 0044485c] [00444860, 00444886] [00444896, 00444948] [00444955, 0044496b]]


void FUN_00444820(int *param_1,char param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d498;
  local_10 = ExceptionList;
  if (*param_1 != 0) {
    puVar2 = *(undefined4 **)(*param_1 + 4);
    puVar3 = (undefined4 *)*puVar2;
    ExceptionList = &local_10;
    while (puVar3 != puVar2) {
      iVar4 = *(int *)(puVar3[5] + 4);
      if (*(char *)(iVar4 + 0x15) == '\0') {
        FUN_00aa9f30(*(undefined4 *)(iVar4 + 8));
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar4);
      }
      *(undefined4 *)(puVar3[5] + 4) = puVar3[5];
      *(undefined4 *)puVar3[5] = puVar3[5];
      *(undefined4 *)(puVar3[5] + 8) = puVar3[5];
      puVar3[6] = 0;
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x21);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
    iVar4 = *param_1;
    FUN_00456c70(*(undefined4 *)(*(int *)(iVar4 + 4) + 4));
    *(int *)(*(int *)(iVar4 + 4) + 4) = *(int *)(iVar4 + 4);
    *(undefined4 *)*(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 4);
    *(int *)(*(int *)(iVar4 + 4) + 8) = *(int *)(iVar4 + 4);
    *(undefined4 *)(iVar4 + 8) = 0;
    if (param_2 != '\0') {
      iVar4 = *param_1;
      if (iVar4 != 0) {
        local_8 = 0;
        FUN_00456d20(**(undefined4 **)(iVar4 + 4),*(undefined4 **)(iVar4 + 4));
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*(undefined4 *)(iVar4 + 4));
      }
      *param_1 = 0;
    }
  }
  ExceptionList = local_10;
  return;
}

