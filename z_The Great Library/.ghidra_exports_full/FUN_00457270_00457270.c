// FUN_00457270 @ 00457270 body=[[00457270, 0045732c] [00457340, 00457355]]


void FUN_00457270(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EDI;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40698;
  local_10 = ExceptionList;
  puVar6 = (undefined4 *)(*(undefined4 **)(param_1 + 4))[1];
  bVar7 = true;
  cVar1 = *(char *)((int)puVar6 + 0x21);
  puVar3 = *(undefined4 **)(param_1 + 4);
  while (cVar1 == '\0') {
    bVar7 = *(int *)(param_2 + 0xc) < (int)puVar6[3];
    if (bVar7) {
      puVar5 = (undefined4 *)*puVar6;
    }
    else {
      puVar5 = (undefined4 *)puVar6[2];
    }
    puVar3 = puVar6;
    puVar6 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x21);
  }
  ExceptionList = &local_10;
  if (bVar7) {
    if (puVar3 == (undefined4 *)**(int **)(param_1 + 4)) {
      bVar7 = true;
      ExceptionList = &local_10;
      goto LAB_004572d5;
    }
    ExceptionList = &local_10;
    FUN_00445c00();
  }
  iVar4 = param_2;
  if (*(int *)(param_2 + 0xc) <= (int)puVar3[3]) {
    local_8 = 0;
    FUN_00445600(**(undefined4 **)(param_2 + 0x14),*(undefined4 **)(param_2 + 0x14));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(iVar4 + 0x14));
  }
LAB_004572d5:
  puVar6 = (undefined4 *)FUN_00457360(&param_2,bVar7,puVar3,param_2);
  uVar2 = *puVar6;
  *(undefined1 *)(unaff_EDI + 1) = 1;
  *unaff_EDI = uVar2;
  ExceptionList = local_10;
  return;
}

