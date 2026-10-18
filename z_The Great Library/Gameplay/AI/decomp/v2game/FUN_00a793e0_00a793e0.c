// FUN_00a793e0 @ 00a793e0 body=[[00a793e0, 00a79601]]


/* WARNING: Type propagation algorithm not settling */

void FUN_00a793e0(void)

{
  char cVar1;
  UINT UVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  char local_3c [32];
  int local_1c;
  int local_18;
  undefined1 *local_14 [4];
  
  local_14[3] = (undefined1 *)0xffffffff;
  local_14[2] = &LAB_00b3a1c6;
  local_14[1] = ExceptionList;
  DAT_01254e8c = 0;
  DAT_012586c8 = 0;
  local_18 = 0x41;
  local_1c = 0x1a;
  ExceptionList = local_14 + 1;
  do {
    _sprintf(local_3c,"%c:",local_18);
    UVar2 = GetDriveTypeA(local_3c);
    if (UVar2 == 5) {
      puVar3 = (undefined1 *)FUN_00aae9af(0x1c);
      local_14[0] = puVar3;
      local_14[3] = (undefined1 *)0x0;
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        pcVar4 = local_3c;
        *(undefined4 *)(puVar3 + 0x14) = 0xf;
        *(undefined4 *)(puVar3 + 0x10) = 0;
        *puVar3 = 0;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(local_3c,(int)pcVar4 - (int)(local_3c + 1));
      }
      local_14[3] = (undefined1 *)0xffffffff;
      local_14[0] = puVar3;
      if ((local_14 < DAT_013f0738) && (DAT_013f0734 <= local_14)) {
        iVar5 = (int)local_14 - (int)DAT_013f0734;
        if (DAT_013f0738 == DAT_013f073c) {
          FUN_00a513f0();
        }
        if (DAT_013f0738 != (undefined1 **)0x0) {
          *DAT_013f0738 = DAT_013f0734[iVar5 >> 2];
        }
      }
      else {
        if (DAT_013f0738 == DAT_013f073c) {
          FUN_00a513f0();
        }
        if (DAT_013f0738 != (undefined1 **)0x0) {
          *DAT_013f0738 = puVar3;
        }
      }
      DAT_013f0738 = DAT_013f0738 + 1;
      DAT_012586c8 = DAT_012586c8 + 1;
    }
    else {
      UVar2 = GetDriveTypeA(local_3c);
      if (UVar2 == 3) {
        puVar3 = (undefined1 *)FUN_00aae9af(0x1c);
        local_14[0] = puVar3;
        local_14[3] = (undefined1 *)0x1;
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = (undefined1 *)0x0;
        }
        else {
          pcVar4 = local_3c;
          *(undefined4 *)(puVar3 + 0x14) = 0xf;
          *(undefined4 *)(puVar3 + 0x10) = 0;
          *puVar3 = 0;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(local_3c,(int)pcVar4 - (int)(local_3c + 1));
        }
        local_14[3] = (undefined1 *)0xffffffff;
        local_14[0] = puVar3;
        if ((local_14 < DAT_013f0748) && (DAT_013f0744 <= local_14)) {
          iVar5 = (int)local_14 - (int)DAT_013f0744;
          if (DAT_013f0748 == DAT_013f074c) {
            FUN_00a513f0();
          }
          if (DAT_013f0748 != (undefined1 **)0x0) {
            *DAT_013f0748 = DAT_013f0744[iVar5 >> 2];
          }
        }
        else {
          if (DAT_013f0748 == DAT_013f074c) {
            FUN_00a513f0();
          }
          if (DAT_013f0748 != (undefined1 **)0x0) {
            *DAT_013f0748 = puVar3;
          }
        }
        DAT_013f0748 = DAT_013f0748 + 1;
        DAT_01254e8c = DAT_01254e8c + 1;
      }
    }
    local_18 = local_18 + 1;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  ExceptionList = local_14[1];
  return;
}

