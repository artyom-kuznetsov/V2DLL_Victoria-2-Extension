// FUN_00547930 @ 00547930 body=[[00547930, 00547b6f]]


int FUN_00547930(int param_1)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  size_t sVar8;
  int in_ECX;
  size_t _Count;
  undefined8 local_38;
  undefined1 local_30;
  uint local_28;
  uint local_24;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fe98;
  local_10 = ExceptionList;
  if (param_1 == -1) {
    return 0;
  }
  uVar1 = **(uint **)(in_ECX + 0x24);
  cVar5 = (char)param_1;
  if ((uVar1 != 0) && (piVar2 = *(int **)(in_ECX + 0x34), uVar1 < *piVar2 + uVar1)) {
    *piVar2 = *piVar2 + -1;
    pcVar3 = (char *)**(int **)(in_ECX + 0x24);
    **(int **)(in_ECX + 0x24) = (int)(pcVar3 + 1);
    *pcVar3 = cVar5;
    return param_1;
  }
  if (*(int *)(in_ECX + 0x54) != 0) {
    ExceptionList = &local_10;
    if (**(int **)(in_ECX + 0x10) == in_ECX + 0x48) {
      uVar4 = *(undefined4 *)(in_ECX + 0x40);
      ExceptionList = &local_10;
      **(int **)(in_ECX + 0x10) = *(int *)(in_ECX + 0x3c);
      **(undefined4 **)(in_ECX + 0x20) = uVar4;
      **(undefined4 **)(in_ECX + 0x30) = 0;
    }
    if (*(int *)(in_ECX + 0x44) == 0) {
      iVar6 = FID_conflict__fputc((int)cVar5,*(FILE **)(in_ECX + 0x54));
      if (iVar6 != -1) {
        ExceptionList = local_10;
        return param_1;
      }
    }
    else {
      local_24 = 0xf;
      local_38 = 0;
      local_14 = CONCAT31(local_14._1_3_,cVar5);
      local_28 = 8;
      local_30 = 0;
      local_8 = 0;
      while( true ) {
        puVar7 = (undefined8 *)local_38;
        do {
          if (local_24 < 0x10) {
            puVar7 = &local_38;
          }
          iVar6 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x14))
                            (in_ECX + 0x4c,&local_14,(int)&local_14 + 1,&local_1c,puVar7,
                             (int)puVar7 + local_28,&local_18);
          if (iVar6 < 0) goto LAB_00547b55;
          if (1 < iVar6) {
            if (iVar6 == 3) {
              cVar5 = FUN_004f6960(local_14,*(undefined4 *)(in_ECX + 0x54));
              if (cVar5 != '\0') {
                FUN_00408ad0();
                ExceptionList = local_10;
                return param_1;
              }
              FUN_00408ad0();
              ExceptionList = local_10;
              return -1;
            }
            goto LAB_00547b55;
          }
          puVar7 = (undefined8 *)local_38;
          if (local_24 < 0x10) {
            puVar7 = &local_38;
          }
          _Count = local_18 - (int)puVar7;
          if (_Count != 0) {
            puVar7 = (undefined8 *)local_38;
            if (local_24 < 0x10) {
              puVar7 = &local_38;
            }
            sVar8 = __fwrite_nolock(puVar7,1,_Count,*(FILE **)(in_ECX + 0x54));
            if (_Count != sVar8) goto LAB_00547b55;
          }
          *(undefined1 *)(in_ECX + 0x49) = 1;
          if (local_1c != &local_14) {
            FUN_00408ad0();
            ExceptionList = local_10;
            return param_1;
          }
          puVar7 = (undefined8 *)local_38;
        } while (_Count != 0);
        if (0x1f < local_28) break;
        FUN_00448860(8,0);
      }
LAB_00547b55:
      FUN_00408ad0();
    }
  }
  ExceptionList = local_10;
  return -1;
}

