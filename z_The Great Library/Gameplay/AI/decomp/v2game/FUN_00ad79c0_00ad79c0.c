// FUN_00ad79c0 @ 00ad79c0 body=[[00ad79c0, 00ad7a46] [00ad7a50, 00ad7a6c] [00ad7a70, 00ad7b54]]


void FUN_00ad79c0(char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  uint local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b37118;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  iVar2 = *(int *)(in_ECX + 0xfc);
  uVar6 = 0;
  if (*(int *)(in_ECX + 0xdc) != 0) {
    do {
      iVar1 = *(int *)(in_ECX + 0xd8) + uVar6 * 8;
      piVar3 = *(int **)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 4) = 0;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(uVar4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(in_ECX + 0xdc));
  }
  if (param_1 != '\0') {
    uVar4 = *(uint *)(in_ECX + 0x84);
    local_20 = 0;
    if (uVar4 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x80) + local_20 * 4);
        if (iVar2 != 0) {
          iVar7 = 0;
          _param_1 = iVar2;
          do {
            if ((*(int *)(iVar7 + 0x14 + *(int *)(iVar1 + 0x1c)) != 0) &&
               (iVar5 = (**(code **)(**(int **)(iVar7 + *(int *)(iVar1 + 0x1c) + 0x14) + 0x10))(),
               iVar5 != 0)) {
              if (*(int *)(iVar7 + 0x14 + *(int *)(iVar1 + 0x1c)) != 0) {
                (**(code **)(**(int **)(iVar7 + *(int *)(iVar1 + 0x1c) + 0x14) + 0x10))();
              }
              FUN_00aeb150(2);
              if (*(int *)(iVar7 + 0x14 + *(int *)(iVar1 + 0x1c)) != 0) {
                (**(code **)(**(int **)(iVar7 + *(int *)(iVar1 + 0x1c) + 0x14) + 0x10))();
              }
              iVar5 = FUN_00aeaf90();
              if (iVar5 == 0) {
                iVar5 = iVar7 + 0x10 + *(int *)(iVar1 + 0x1c);
                piVar3 = *(int **)(iVar5 + 4);
                uStack_4 = 0;
                *(undefined4 *)(iVar5 + 4) = 0;
                if (piVar3 != (int *)0x0) {
                  (**(code **)(*piVar3 + 8))();
                }
                uStack_4 = 0xffffffff;
              }
            }
            iVar7 = iVar7 + 0x20;
            _param_1 = _param_1 + -1;
          } while (_param_1 != 0);
        }
        local_20 = local_20 + 1;
      } while (local_20 < uVar4);
    }
  }
  ExceptionList = local_c;
  return;
}

