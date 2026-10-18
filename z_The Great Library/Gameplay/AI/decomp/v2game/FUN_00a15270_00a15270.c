// FUN_00a15270 @ 00a15270 body=[[00a15270, 00a153b9]]


void FUN_00a15270(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int in_ECX;
  undefined4 uVar8;
  undefined2 uStack_1e;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b54e7d;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  piVar5 = (int *)FUN_00aae9af(0x3c);
  if (piVar5 == (int *)0x0) {
    param_1 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
    piVar5[1] = 0;
    piVar5[2] = 0;
    piVar5[4] = 0;
    piVar5[5] = 0;
    piVar5[6] = 0;
    piVar5[0xd] = 0xf;
    piVar5[0xc] = 0;
    *(undefined1 *)(piVar5 + 8) = 0;
    local_8 = 3;
    FUN_009d5e10(param_1);
    param_1 = piVar5;
  }
  local_8 = 0xffffffff;
  uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x8c) + 0x38) + 0x44))
                    (*(undefined4 *)(in_ECX + 0x90));
  uVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x8c) + 0x38) + 0x48))
                    (*(undefined4 *)(in_ECX + 0x90));
  local_8 = 4;
  uVar8 = *(undefined4 *)(in_ECX + 0x90);
  cVar3 = (**(code **)(*DAT_01258b30 + 0x18))(param_1,uVar8);
  if (cVar3 == '\0') {
    iVar1 = *(int *)(in_ECX + 0xe0);
    puVar7 = (undefined8 *)FUN_00aae9af(0x18);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *puVar7 = CONCAT26(uStack_1e,CONCAT24(uVar4,uVar6));
      *(int **)(puVar7 + 1) = param_1;
      *(int *)((int)puVar7 + 0xc) = iVar1;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined1 *)((int)puVar7 + 0x14) = 0;
    }
    iVar2 = *(int *)(in_ECX + 0xe4);
    *(undefined8 **)(in_ECX + 0xe0) = puVar7;
    *(int *)(in_ECX + 0xe4) = iVar2 + 1;
    if (iVar2 == 0) {
      *(undefined8 **)(in_ECX + 0xdc) = puVar7;
    }
    else {
      *(undefined8 **)(iVar1 + 0x10) = puVar7;
    }
  }
  local_8 = 0xffffffff;
  *(int *)(in_ECX + 0x7c) = param_1[1] - *param_1;
  FUN_00a154be(uVar8);
  return;
}

