// FUN_00ad4ef0 @ 00ad4ef0 body=[[00ad4ef0, 00ad51fb]]


void FUN_00ad4ef0(char *param_1,char *param_2,char *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int in_ECX;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *local_440;
  uint local_43c;
  char *local_438;
  uint local_434;
  undefined4 local_430;
  char *local_42c;
  int local_428;
  char *local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  char local_410 [1024];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b36f26;
  local_c = ExceptionList;
  local_10 = DAT_00ef259c ^ (uint)&local_440;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffbb0;
  ExceptionList = &local_c;
  local_42c = param_1;
  local_440 = param_2;
  local_424 = param_3;
  local_438 = (char *)0x0;
  local_434 = 0;
  local_430 = 0;
  local_420 = 0;
  local_41c = 0;
  local_418 = 0;
  local_414 = *(uint *)(in_ECX + 0x84);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_43c = 0;
  local_428 = in_ECX;
  if (local_414 != 0) {
    do {
      pcVar6 = local_42c;
      puVar3 = (undefined4 *)
               FUN_00b15770(*(undefined4 *)
                             (*(int *)(*(int *)(local_428 + 0x80) + local_43c * 4) + 0x10));
      pcVar8 = (char *)*puVar3;
      if (pcVar8 == (char *)0x0) {
        pcVar8 = "";
      }
      iVar4 = FUN_00aafe90(pcVar8,param_3);
      if (iVar4 != 0) {
        pcVar5 = pcVar6;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00b137d0(pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
        pcVar6 = pcVar8;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00b137d0(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
        pcVar8 = local_438;
        if (local_438 == (char *)0x0) {
          pcVar8 = "";
        }
        _memset(local_410,0,0x400);
        if (local_434 != 0) {
          do {
            iVar4 = FUN_00aafe90(pcVar8,local_440);
            if (iVar4 == 0) break;
            pcVar6 = local_438;
            if (local_438 == (char *)0x0) {
              pcVar6 = "";
            }
            pcVar8 = local_438;
            if (local_438 == (char *)0x0) {
              pcVar8 = "";
            }
            _strncpy(local_410,pcVar8,iVar4 - (int)pcVar6);
            pcVar8 = param_3;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            pcVar5 = (char *)((int)&local_414 + 3);
            do {
              pcVar10 = pcVar5 + 1;
              pcVar5 = pcVar5 + 1;
            } while (*pcVar10 != '\0');
            pcVar10 = param_3;
            for (uVar7 = (uint)((int)pcVar8 - (int)param_3) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar5 = pcVar5 + 4;
            }
            for (uVar7 = (int)pcVar8 - (int)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar5 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar5 = pcVar5 + 1;
            }
            pcVar8 = local_440;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            pcVar8 = pcVar8 + (iVar4 - (int)(local_440 + 1));
            pcVar5 = pcVar8;
            do {
              cVar1 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 != '\0');
            pcVar10 = (char *)((int)&local_414 + 3);
            do {
              pcVar9 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
            } while (*pcVar9 != '\0');
            pcVar9 = pcVar8;
            for (uVar7 = (uint)((int)pcVar5 - (int)pcVar8) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
              pcVar9 = pcVar9 + 4;
              pcVar10 = pcVar10 + 4;
            }
            for (uVar7 = (int)pcVar5 - (int)pcVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *pcVar10 = *pcVar9;
              pcVar9 = pcVar9 + 1;
              pcVar10 = pcVar10 + 1;
            }
            pcVar8 = local_440;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            pcVar8 = pcVar8 + (iVar4 - (int)(local_440 + 1));
            cVar1 = FUN_00b14730(local_410);
            if (cVar1 == '\x01') {
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00b13650();
              local_4 = 0xffffffff;
              FUN_00b13650();
              goto LAB_00ad51d2;
            }
            param_3 = local_424;
          } while ((uint)(iVar4 - (int)pcVar6) < local_434);
        }
      }
      local_43c = local_43c + 1;
    } while (local_43c < local_414);
  }
  if (param_4 == '\x01') {
    FUN_00ad4ef0(local_42c,param_3,local_440,0);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00b13650(uVar2);
    local_4 = 0xffffffff;
    FUN_00b13650();
  }
  else {
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00b13650(uVar2);
    local_4 = 0xffffffff;
    FUN_00b13650();
  }
LAB_00ad51d2:
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_440);
  return;
}

