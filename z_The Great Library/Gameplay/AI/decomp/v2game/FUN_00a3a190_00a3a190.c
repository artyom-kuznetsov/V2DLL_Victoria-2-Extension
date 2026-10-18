// FUN_00a3a190 @ 00a3a190 body=[[00a3a190, 00a3a2c7]]


void FUN_00a3a190(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b411d6;
  iVar1 = param_1[1];
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (iVar1 == 0) {
LAB_00a3a1ca:
      FUN_00614080(param_2);
      ExceptionList = local_10;
      return;
    }
    cVar4 = FUN_00a388d0(iVar1,param_2);
    if (cVar4 == '\0') {
      if (iVar1 != 0) {
        iVar2 = param_1[1];
        if (iVar1 != iVar2) {
          iVar2 = *(int *)(iVar1 + 0x20);
          iVar6 = FUN_00aae9af(0x28);
          local_8 = 1;
          if (iVar6 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_00409310(iVar1,iVar2);
          }
          *(undefined4 *)(iVar1 + 0x20) = uVar7;
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x1c) = uVar7;
          }
          param_1[2] = param_1[2] + 1;
          ExceptionList = local_10;
          return;
        }
        puVar5 = (undefined1 *)FUN_00aae9af(0x28);
        local_8 = 0;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = (undefined1 *)0x0;
        }
        else {
          *(undefined4 *)(puVar5 + 0x14) = 0xf;
          *(undefined4 *)(puVar5 + 0x10) = 0;
          *puVar5 = 0;
          FUN_00408ed0(param_2,0,0xffffffff);
          *(int *)(puVar5 + 0x1c) = iVar2;
          *(undefined4 *)(puVar5 + 0x20) = 0;
          puVar5[0x24] = 0;
        }
        iVar1 = param_1[2];
        param_1[1] = puVar5;
        param_1[2] = iVar1 + 1;
        if (iVar1 == 0) {
          *param_1 = puVar5;
          ExceptionList = local_10;
          return;
        }
        *(undefined1 **)(iVar2 + 0x20) = puVar5;
        ExceptionList = local_10;
        return;
      }
      goto LAB_00a3a1ca;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    ppvVar3 = ExceptionList;
  } while( true );
}

