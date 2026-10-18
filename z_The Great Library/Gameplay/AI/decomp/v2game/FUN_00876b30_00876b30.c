// FUN_00876b30 @ 00876b30 body=[[00876b30, 00878d7e]]


void FUN_00876b30(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_24c [56];
  undefined4 uStack_16c;
  undefined4 uStack_168;
  int iStack_164;
  int iStack_160;
  char *pcStack_15c;
  int iStack_158;
  char *pcStack_154;
  int iStack_150;
  int *piStack_14c;
  int *local_13c;
  int *local_138;
  int *local_130;
  undefined1 local_12c [28];
  undefined1 auStack_110 [28];
  undefined1 local_f4 [224];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b942ee;
  local_14 = ExceptionList;
  local_130 = (int *)0x0;
  if (param_2 < 0x2c0) {
    if (param_2 == 0x2bf) {
      piStack_14c = (int *)0x28;
      iStack_150 = 0x876f78;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CGovernmentEffect::vftable;
      goto LAB_00876c72;
    }
    switch(param_2) {
    case 0x1bf:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876eb0;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) {
LAB_0087712b:
        local_13c = (int *)0x0;
      }
      else {
        piStack_14c = (int *)0x876ec0;
        local_13c = (int *)FUN_00879e20();
      }
      break;
    default:
      goto switchD_00876b87_caseD_1c0;
    case 0x1cb:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876e75;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CSlaveEffect::vftable;
      break;
    case 0x1ec:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876e18;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x876e28;
      local_13c = (int *)FUN_00879c70();
      break;
    case 0x22f:
      piStack_14c = (int *)0x30;
      iStack_150 = 0x876ed2;
      ExceptionList = &local_14;
      piStack_14c = (int *)FUN_00aae9af();
      local_c = 9;
      if (piStack_14c == (int *)0x0) {
LAB_00877350:
        local_130 = (int *)0x0;
        local_c = 0xffffffff;
      }
      else {
        iStack_150 = 0x876ef2;
        local_130 = (int *)FUN_008a24b0();
        local_c = 0xffffffff;
      }
      goto LAB_008771b8;
    case 0x23a:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x876f5a;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x876f6a;
      local_130 = (int *)FUN_008844b0();
      goto LAB_008771b8;
    case 0x256:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x876cf6;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x876d06;
      local_13c = (int *)FUN_008799d0();
      break;
    case 0x25e:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x876f0b;
      ExceptionList = &local_14;
      piStack_14c = (int *)FUN_00aae9af();
      local_c = 10;
      if (piStack_14c == (int *)0x0) {
LAB_00876f3d:
        local_13c = (int *)0x0;
        local_c = 0xffffffff;
      }
      else {
        iStack_150 = 0x876f27;
        local_13c = (int *)FUN_008a3740();
        local_c = 0xffffffff;
      }
      goto LAB_0087807d;
    case 0x28d:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876d8e;
      ExceptionList = &local_14;
      piStack_14c = (int *)FUN_00aae9af();
      local_c = 6;
      if (piStack_14c == (int *)0x0) {
        local_13c = (int *)0x0;
        local_c = 0xffffffff;
      }
      else {
        iStack_150 = 0x876daa;
        local_13c = (int *)FUN_008938a0();
        local_c = 0xffffffff;
      }
      break;
    case 0x28f:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x876d53;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CAddAcceptedCultureEffect::vftable;
      break;
    case 0x290:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876ddd;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CRemoveAcceptedCultureEffect::vftable;
      break;
    case 0x292:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876e3a;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CReligionEffect::vftable;
      break;
    case 0x29c:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876d18;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CTradeGoodsEffect::vftable;
      break;
    case 0x2a2:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x876b95;
      ExceptionList = &local_14;
      local_138 = (int *)FUN_00aae9af();
      if (local_138 == (int *)0x0) {
        local_138 = (int *)0x0;
      }
      else {
        local_138[2] = 0;
        local_138[3] = 0;
        local_138[4] = 0;
        *(undefined1 *)(local_138 + 5) = 0;
        local_138[1] = 0x18d;
        *(undefined2 *)(local_138 + 7) = 0;
        local_138[8] = 0;
        *local_138 = (int)CCapitalEffect::vftable;
      }
      iVar3 = *(int *)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x876bdd;
      puVar4 = (undefined4 *)FUN_00aae9af();
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = local_138;
        puVar4[1] = iVar3;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x10);
      *(undefined4 **)(in_ECX + 0xc) = puVar4;
      *(int *)(in_ECX + 0x10) = iVar5 + 1;
      local_130 = local_138;
      if (iVar5 == 0) {
        *(undefined4 **)(in_ECX + 8) = puVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar4;
      }
      goto LAB_008770ce;
    case 0x2ab:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x876c2b;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) {
LAB_00876c6c:
        local_13c = (int *)0x0;
      }
      else {
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CAddCoreEffect::vftable;
        local_13c[8] = 0x2d2d2d;
        local_13c[9] = 0;
      }
      goto LAB_00876c72;
    case 0x2ac:
      piStack_14c = (int *)0x30;
      iStack_150 = 0x876cab;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CRemCoreEffect::vftable;
      local_13c[9] = 0x2d2d2d;
      local_13c[10] = 0;
      goto LAB_00876c72;
    }
    goto LAB_00877131;
  }
  if (0x68e < param_2) {
    if (0x799 < param_2) {
      if (0x89c < param_2) {
        if (0x9b0 < param_2) {
          switch(param_2) {
          case 0x9b3:
            piStack_14c = (int *)0x2c;
            iStack_150 = 0x87873f;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) {
              local_130 = (int *)0x0;
            }
            else {
              piStack_14c = (int *)0x87874b;
              local_130 = (int *)FUN_0088d9a0();
            }
LAB_0087835e:
            local_138 = *(int **)(in_ECX + 0xc);
            goto LAB_00878365;
          default:
            goto switchD_00876b87_caseD_1c0;
          case 0x9db:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x878833;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_0087712b;
            piStack_14c = (int *)0x878843;
            local_13c = (int *)FUN_00879fd0();
            break;
          case 0x9de:
            piStack_14c = (int *)0x3c;
            iStack_150 = 0x8788d9;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_0087712b;
            piStack_14c = (int *)0x8788e9;
            local_13c = (int *)FUN_0087a1f0();
            break;
          case 0x9df:
            piStack_14c = (int *)0x3c;
            iStack_150 = 0x8788fb;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_0087712b;
            piStack_14c = (int *)0x87890b;
            local_13c = (int *)FUN_0087a220();
            break;
          case 0x9ea:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x878855;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_0087712b;
            piStack_14c = (int *)0x878865;
            local_13c = (int *)FUN_0087a000();
            break;
          case 0x9fe:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x8787f8;
            ExceptionList = &local_14;
            local_13c = (int *)FUN_00aae9af();
            if (local_13c == (int *)0x0) goto LAB_0087712b;
            local_13c[2] = 0;
            local_13c[3] = 0;
            local_13c[4] = 0;
            *(undefined1 *)(local_13c + 5) = 0;
            local_13c[1] = 0x18d;
            *(undefined2 *)(local_13c + 7) = 0;
            *local_13c = (int)CCrisisInterestEffect::vftable;
            break;
          case 0xa3f:
            piStack_14c = (int *)0x58;
            iStack_150 = 0x87891d;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_008771b6;
            piStack_14c = (int *)0x87892d;
            local_130 = (int *)FUN_0087a250();
            goto LAB_008771b8;
          case 0xa55:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x878760;
            ExceptionList = &local_14;
            local_13c = (int *)FUN_00aae9af();
            if (local_13c == (int *)0x0) goto LAB_00876c6c;
            local_13c[2] = 0;
            local_13c[3] = 0;
            local_13c[4] = 0;
            *(undefined1 *)(local_13c + 5) = 0;
            local_13c[1] = 0x18d;
            *(undefined2 *)(local_13c + 7) = 0;
            *local_13c = (int)CWorldWarsEnableEffect::vftable;
            goto LAB_00876c72;
          case 0xa5b:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x87879b;
            ExceptionList = &local_14;
            local_13c = (int *)FUN_00aae9af();
            if (local_13c == (int *)0x0) goto LAB_0087712b;
            local_13c[2] = 0;
            local_13c[3] = 0;
            local_13c[4] = 0;
            *(undefined1 *)(local_13c + 5) = 0;
            local_13c[1] = 0x18d;
            *(undefined2 *)(local_13c + 7) = 0;
            *local_13c = (int)CAssimilateEffect::vftable;
            break;
          case 0xa5c:
            piStack_14c = (int *)0x3c;
            iStack_150 = 0x878877;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_008771b6;
            piStack_14c = (int *)0x878887;
            local_130 = (int *)FUN_0087a030();
            goto LAB_008771b8;
          case 0xa67:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x878895;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_00878077;
            piStack_14c = (int *)0x8788a5;
            local_13c = (int *)FUN_0087a0c0();
            goto LAB_0087807d;
          case 0xa68:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x8788b7;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_0087712b;
            piStack_14c = (int *)0x8788c7;
            local_13c = (int *)FUN_0087a0f0();
            break;
          case 0xa69:
            piStack_14c = (int *)0x24;
            iStack_150 = 0x8787d6;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 == 0) goto LAB_0087712b;
            piStack_14c = (int *)0x8787e6;
            local_13c = (int *)FUN_00879ca0();
          }
          goto LAB_00877131;
        }
        if (param_2 == 0x9b0) {
          piStack_14c = (int *)0x24;
          iStack_150 = 0x8786e6;
          ExceptionList = &local_14;
          local_13c = (int *)FUN_00aae9af();
          if (local_13c == (int *)0x0) goto LAB_0087712b;
          local_13c[2] = 0;
          local_13c[3] = 0;
          local_13c[4] = 0;
          *(undefined1 *)(local_13c + 5) = 0;
          local_13c[1] = 0x18d;
          *(undefined2 *)(local_13c + 7) = 0;
          *local_13c = (int)CGreatWarsEnableEffect::vftable;
          goto LAB_00877131;
        }
        switch(param_2) {
        case 0x8ad:
          piStack_14c = (int *)0x4c;
          iStack_150 = 0x87832b;
          ExceptionList = &local_14;
          local_130 = (int *)FUN_00aae9af();
          local_c = 2;
          if (local_130 == (int *)0x0) {
            local_130 = (int *)0x0;
          }
          else {
            iStack_150 = 0x878349;
            piStack_14c = local_130;
            FUN_0089c770();
            *local_130 = (int)CRemoveCasusBelliEffect::vftable;
          }
          local_c = 0xffffffff;
          goto LAB_0087835e;
        case 0x8ae:
          piStack_14c = (int *)0x4c;
          iStack_150 = 0x878397;
          ExceptionList = &local_14;
          local_130 = (int *)FUN_00aae9af();
          local_c = 3;
          if (local_130 == (int *)0x0) {
            local_130 = (int *)0x0;
          }
          else {
            iStack_150 = 0x8783b5;
            piStack_14c = local_130;
            FUN_0089c770();
            *local_130 = (int)CReversedRemoveCasusBelliEffect::vftable;
          }
          local_c = 0xffffffff;
          goto LAB_008783ca;
        default:
          goto switchD_00876b87_caseD_1c0;
        case 0x8b7:
          piStack_14c = (int *)0x24;
          iStack_150 = 0x87851a;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_0087712b;
          piStack_14c = (int *)0x87852a;
          local_13c = (int *)FUN_0087a150();
          break;
        case 0x8dd:
          piStack_14c = (int *)0x3c;
          iStack_150 = 0x878427;
          ExceptionList = &local_14;
          piStack_14c = (int *)FUN_00aae9af();
          local_c = 4;
          if (piStack_14c == (int *)0x0) goto LAB_00877350;
          iStack_150 = 0x878447;
          local_130 = (int *)FUN_00885850();
          local_c = 0xffffffff;
          goto LAB_008771b8;
        case 0x908:
          piStack_14c = (int *)0x30;
          iStack_150 = 0x87855e;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_008771b6;
          piStack_14c = (int *)0x87856e;
          local_130 = (int *)FUN_00883c70();
          goto LAB_008771b8;
        case 0x91d:
          piStack_14c = (int *)0x2c;
          iStack_150 = 0x878403;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_00876c6c;
          piStack_14c = (int *)0x1;
          iStack_150 = 0x878415;
          local_13c = (int *)FUN_00887fa0();
          goto LAB_00876c72;
        case 0x932:
          piStack_14c = (int *)0x50;
          iStack_150 = 0x87857c;
          ExceptionList = &local_14;
          piStack_14c = (int *)FUN_00aae9af();
          local_c = 0xb;
          if (piStack_14c == (int *)0x0) goto LAB_00877e36;
          iStack_150 = 0x87859c;
          local_130 = (int *)FUN_008a40a0();
          local_c = 0xffffffff;
          local_138 = *(int **)(in_ECX + 0xc);
          goto LAB_00878365;
        case 0x985:
          piStack_14c = (int *)0x28;
          iStack_150 = 0x8785bc;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_008777cc;
          piStack_14c = (int *)0x0;
          iStack_150 = 0x8785cd;
          local_130 = (int *)FUN_008a4810();
          local_138 = *(int **)(in_ECX + 0xc);
          goto LAB_00878365;
        case 0x986:
          piStack_14c = (int *)0x28;
          iStack_150 = 0x8785e2;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_008777cc;
          piStack_14c = (int *)0x1;
          iStack_150 = 0x8785f4;
          local_130 = (int *)FUN_008a4810();
          local_138 = *(int **)(in_ECX + 0xc);
          goto LAB_00878365;
        case 0x988:
          piStack_14c = (int *)0x3c;
          iStack_150 = 0x878609;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) {
            local_130 = (int *)0x0;
          }
          else {
            piStack_14c = (int *)0x878615;
            local_130 = (int *)FUN_008a4f20();
          }
          iVar3 = *(int *)(in_ECX + 0xc);
          piStack_14c = (int *)0x10;
          iStack_150 = 0x878635;
          puVar4 = (undefined4 *)FUN_00aae9af();
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = local_130;
            puVar4[1] = iVar3;
            puVar4[2] = 0;
            *(undefined1 *)(puVar4 + 3) = 0;
          }
          iVar5 = *(int *)(in_ECX + 0x10);
          *(undefined4 **)(in_ECX + 0xc) = puVar4;
          *(int *)(in_ECX + 0x10) = iVar5 + 1;
          if (iVar5 == 0) {
            *(undefined4 **)(in_ECX + 8) = puVar4;
          }
          else {
            *(undefined4 **)(iVar3 + 8) = puVar4;
          }
          piStack_14c = (int *)0x87867e;
          FUN_009885d0();
          piStack_14c = (int *)0xffffffff;
          local_c = 0xc;
          iStack_150 = 0;
          iStack_158 = 0x87869b;
          pcStack_154 = local_f4;
          FUN_00408ed0();
          goto LAB_00878d55;
        case 0x98f:
          piStack_14c = (int *)0x24;
          iStack_150 = 0x878460;
          ExceptionList = &local_14;
          local_13c = (int *)FUN_00aae9af();
          if (local_13c == (int *)0x0) goto LAB_00878077;
          local_13c[2] = 0;
          local_13c[3] = 0;
          local_13c[4] = 0;
          *(undefined1 *)(local_13c + 5) = 0;
          local_13c[1] = 0x18d;
          *(undefined2 *)(local_13c + 7) = 0;
          *local_13c = (int)CSetMilitaryReformEffect::vftable;
          goto LAB_0087807d;
        case 0x990:
          piStack_14c = (int *)0x24;
          iStack_150 = 0x87849b;
          ExceptionList = &local_14;
          local_13c = (int *)FUN_00aae9af();
          if (local_13c == (int *)0x0) goto LAB_0087712b;
          local_13c[2] = 0;
          local_13c[3] = 0;
          local_13c[4] = 0;
          *(undefined1 *)(local_13c + 5) = 0;
          local_13c[1] = 0x18d;
          *(undefined2 *)(local_13c + 7) = 0;
          *local_13c = (int)CSetEconomicReformEffect::vftable;
          break;
        case 0x999:
          piStack_14c = (int *)0x24;
          iStack_150 = 0x87853c;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_0087712b;
          piStack_14c = (int *)0x87854c;
          local_13c = (int *)FUN_0087a170();
          break;
        case 0x99b:
          piStack_14c = (int *)0x3c;
          iStack_150 = 0x8786a9;
          ExceptionList = &local_14;
          piStack_14c = (int *)FUN_00aae9af();
          local_c = 0xd;
          if (piStack_14c == (int *)0x0) goto LAB_00876f3d;
          iStack_150 = 0x8786c9;
          local_13c = (int *)FUN_008a3d40();
          local_c = 0xffffffff;
          goto LAB_0087807d;
        case 0x99e:
          piStack_14c = (int *)0x24;
          iStack_150 = 0x8784f8;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_0087712b;
          piStack_14c = (int *)0x878508;
          local_13c = (int *)FUN_00879dc0();
          break;
        case 0x99f:
          piStack_14c = (int *)0x24;
          iStack_150 = 0x8784d6;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_0087712b;
          piStack_14c = (int *)0x8784e6;
          local_13c = (int *)FUN_00879d90();
        }
        goto LAB_00877131;
      }
      if (param_2 == 0x89c) {
        piStack_14c = (int *)0x24;
        iStack_150 = 0x8782be;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        local_13c[8] = 0;
        *local_13c = (int)CPrestigeFactorEffect::vftable;
        goto LAB_00877131;
      }
      switch(param_2) {
      case 0x79b:
        piStack_14c = (int *)0x3c;
        iStack_150 = 0x877ec3;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087707b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        local_13c[0xd] = 0xf;
        local_13c[0xc] = 0;
        *(undefined1 *)(local_13c + 8) = 0;
        *local_13c = (int)CSetGlobalFlagEffect::vftable;
        goto LAB_00877081;
      case 0x79c:
        piStack_14c = (int *)0x3c;
        iStack_150 = 0x877f0c;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        local_13c[0xd] = 0xf;
        local_13c[0xc] = 0;
        *(undefined1 *)(local_13c + 8) = 0;
        *local_13c = (int)CClrGlobalFlagEffect::vftable;
        break;
      default:
        goto switchD_00876b87_caseD_1c0;
      case 0x7a6:
        piStack_14c = (int *)0x178;
        iStack_150 = 0x877f76;
        ExceptionList = &local_14;
        piStack_14c = (int *)FUN_00aae9af();
        local_c = 5;
        if (piStack_14c == (int *)0x0) goto LAB_00877e36;
        iStack_150 = 0x877f96;
        local_130 = (int *)FUN_00879a00();
        local_c = 0xffffffff;
        local_138 = *(int **)(in_ECX + 0xc);
        goto LAB_00878365;
      case 0x7a7:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x877fb6;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_00876c6c;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CFixedAIStrategyEffect::vftable;
        goto LAB_00876c72;
      case 0x7b9:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x8781c4;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CNeutralityEffect::vftable;
        break;
      case 0x7bd:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x8780b6;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CHoldElectionEffect::vftable;
        break;
      case 0x865:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x877ff1;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CNationalValueEffect::vftable;
        break;
      case 0x869:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x87804a;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) {
LAB_00878077:
          local_13c = (int *)0x0;
        }
        else {
          local_13c[2] = 0;
          local_13c[3] = 0;
          local_13c[4] = 0;
          *(undefined1 *)(local_13c + 5) = 0;
          local_13c[1] = 0x18d;
          *(undefined2 *)(local_13c + 7) = 0;
          *local_13c = (int)CCivilizedChangeEffect::vftable;
        }
        goto LAB_0087807d;
      case 0x877:
        piStack_14c = (int *)0x3c;
        iStack_150 = 0x877f55;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_008771b6;
        piStack_14c = (int *)0x877f65;
        local_130 = (int *)FUN_008796c0();
        goto LAB_008771b8;
      case 0x878:
        piStack_14c = (int *)0x4c;
        iStack_150 = 0x87802c;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_008771b6;
        piStack_14c = (int *)0x87803c;
        local_130 = (int *)FUN_00879c20();
        goto LAB_008771b8;
      case 0x889:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x878189;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CSetEconomicPolicyEffect::vftable;
        break;
      case 0x88b:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x87812c;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CSetPoliticalReformEffect::vftable;
        break;
      case 0x88c:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x8780f1;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CSetSocialReformEffect::vftable;
        break;
      case 0x88e:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x878167;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_0087712b;
        piStack_14c = (int *)0x878177;
        local_13c = (int *)FUN_00879d00();
        break;
      case 0x88f:
        piStack_14c = (int *)0x28;
        iStack_150 = 0x8781ff;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_0087712b;
        piStack_14c = (int *)0x87820f;
        local_13c = (int *)FUN_00879d30();
        break;
      case 0x890:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x878221;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_0087712b;
        piStack_14c = (int *)0x878231;
        local_13c = (int *)FUN_00879d60();
        break;
      case 0x891:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x878243;
        ExceptionList = &local_14;
        local_13c = (int *)FUN_00aae9af();
        if (local_13c == (int *)0x0) goto LAB_0087712b;
        local_13c[2] = 0;
        local_13c[3] = 0;
        local_13c[4] = 0;
        *(undefined1 *)(local_13c + 5) = 0;
        local_13c[1] = 0x18d;
        *(undefined2 *)(local_13c + 7) = 0;
        *local_13c = (int)CChangePopTypeEffect::vftable;
        break;
      case 0x892:
        piStack_14c = (int *)0x24;
        iStack_150 = 0x87829c;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_00878077;
        piStack_14c = (int *)0x8782ac;
        local_13c = (int *)FUN_00879e80();
LAB_0087807d:
        local_138 = *(int **)(in_ECX + 0xc);
        piStack_14c = (int *)0x10;
        iStack_150 = 0x87808f;
        puVar4 = (undefined4 *)FUN_00aae9af();
        local_130 = local_13c;
        if (puVar4 == (undefined4 *)0x0) goto LAB_008770ac;
        *puVar4 = local_13c;
        puVar4[1] = local_138;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
        goto LAB_008770ae;
      case 0x893:
        piStack_14c = (int *)0x30;
        iStack_150 = 0x87827e;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_008771b6;
        piStack_14c = (int *)0x87828e;
        local_130 = (int *)FUN_00898620();
        goto LAB_008771b8;
      }
      goto LAB_00877131;
    }
    if (param_2 == 0x799) {
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877e56;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CRemoveFoWEffect::vftable;
      goto LAB_00876c72;
    }
    switch(param_2) {
    case 0x690:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x877bb7;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008773ac;
      piStack_14c = (int *)0x877bc7;
      local_130 = (int *)FUN_00879870();
      goto LAB_008783ca;
    default:
      goto switchD_00876b87_caseD_1c0;
    case 0x69a:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877d06;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CEnableCanalEffect::vftable;
      goto LAB_00877131;
    case 0x69d:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x877b76;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x0;
      iStack_150 = 0x877b87;
      local_13c = (int *)FUN_00880dd0();
      goto LAB_00877131;
    case 0x6ca:
      piStack_14c = (int *)0x20;
      iStack_150 = 0x877c4b;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) {
LAB_008771b6:
        local_130 = (int *)0x0;
      }
      else {
        local_130[2] = 0;
        local_130[3] = 0;
        local_130[4] = 0;
        *(undefined1 *)(local_130 + 5) = 0;
        local_130[1] = 0x18d;
        *(undefined2 *)(local_130 + 7) = 0;
        *local_130 = (int)CHiddenEffect::vftable;
      }
      break;
    case 0x6ef:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x877c82;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_00876c6c;
      piStack_14c = (int *)0x877c92;
      local_13c = (int *)FUN_008798b0();
      goto LAB_00876c72;
    case 0x6f2:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877d7e;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CKillLeaderEffect::vftable;
      goto LAB_00876c72;
    case 0x6f3:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877bd5;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CRemoveProvinceModifierEffect::vftable;
      goto LAB_00876c72;
    case 0x6f4:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877c10;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CRemoveCountryModifierEffect::vftable;
      goto LAB_00877131;
    case 0x6f9:
      piStack_14c = (int *)0x44;
      iStack_150 = 0x877dfb;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      local_c = 8;
      if (local_130 == (int *)0x0) {
LAB_00877e36:
        local_c = 0xffffffff;
        local_138 = *(int **)(in_ECX + 0xc);
        local_130 = (int *)0x0;
      }
      else {
        iStack_150 = 0x877e19;
        piStack_14c = local_130;
        FUN_0088c340();
        local_c = 0xffffffff;
        *local_130 = (int)CDefineAdmiralEffect::vftable;
        local_138 = *(int **)(in_ECX + 0xc);
      }
      goto LAB_00878365;
    case 0x6fc:
      piStack_14c = (int *)0x44;
      iStack_150 = 0x877dbc;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      local_c = 7;
      if (local_130 == (int *)0x0) goto LAB_00877350;
      iStack_150 = 0x877dde;
      piStack_14c = local_130;
      FUN_0088c340();
      *local_130 = (int)CDefineGeneralEffect::vftable;
      local_c = 0xffffffff;
      break;
    case 0x700:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x877cc2;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_00876c6c;
      piStack_14c = (int *)0x877cd2;
      local_13c = (int *)FUN_0088de60();
LAB_00876c72:
      local_138 = *(int **)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x876c84;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_130 = local_13c;
      if (puVar4 == (undefined4 *)0x0) goto LAB_008770ac;
      *puVar4 = local_13c;
      puVar4[1] = local_138;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      goto LAB_008770ae;
    case 0x701:
      piStack_14c = (int *)0x4c;
      iStack_150 = 0x877ca4;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x877cb4;
      local_130 = (int *)FUN_008798f0();
      break;
    case 0x707:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x877ce4;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x877cf4;
      local_13c = (int *)FUN_008799a0();
      goto LAB_00877131;
    case 0x70c:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877d44;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) goto LAB_008771b6;
      local_130[2] = 0;
      local_130[3] = 0;
      local_130[4] = 0;
      *(undefined1 *)(local_130 + 5) = 0;
      local_130[1] = 0x18d;
      *(undefined2 *)(local_130 + 7) = 0;
      local_130[8] = 0;
      *local_130 = (int)CRandomEffect::vftable;
      break;
    case 0x716:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x877b99;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x877ba9;
      local_130 = (int *)FUN_00879680();
    }
LAB_008771b8:
    local_138 = *(int **)(in_ECX + 0xc);
    piStack_14c = (int *)0x10;
    iStack_150 = 0x8771ca;
    puVar4 = (undefined4 *)FUN_00aae9af();
    if (puVar4 == (undefined4 *)0x0) goto LAB_008771e3;
    *puVar4 = local_130;
    puVar4[1] = local_138;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    goto LAB_008771e5;
  }
  if (param_2 == 0x68e) {
switchD_0087759f_caseD_458:
    piStack_14c = (int *)0x4c;
    iStack_150 = 0x877b29;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008773ac;
    piStack_14c = (int *)0x877b39;
    local_130 = (int *)FUN_00879750();
    goto LAB_008783ca;
  }
  if (param_2 < 0x43a) {
    if (param_2 == 0x439) {
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x87755c;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_00878077;
      piStack_14c = (int *)0x87756c;
      local_13c = (int *)FUN_0087a190();
      goto LAB_0087807d;
    }
    if (param_2 < 0x334) {
      if (param_2 == 0x333) {
        piStack_14c = (int *)0x28;
        iStack_150 = 0x87700b;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_0087712b;
        piStack_14c = (int *)0x87701b;
        local_13c = (int *)FUN_00879a60();
      }
      else {
        if (param_2 != 0x2d0) goto switchD_00876b87_caseD_1c0;
        piStack_14c = (int *)0x24;
        iStack_150 = 0x876fe9;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 == 0) goto LAB_0087712b;
        piStack_14c = (int *)0x876ff9;
        local_13c = (int *)FUN_00879fa0();
      }
      goto LAB_00877131;
    }
    switch(param_2) {
    case 0x343:
      piStack_14c = (int *)0x4c;
      iStack_150 = 0x877326;
      ExceptionList = &local_14;
      piStack_14c = (int *)FUN_00aae9af();
      local_c = 0;
      if (piStack_14c == (int *)0x0) goto LAB_00877350;
      iStack_150 = 0x87733e;
      local_130 = (int *)FUN_0089c770();
      local_c = 0xffffffff;
      goto LAB_008771b8;
    default:
      goto switchD_00876b87_caseD_1c0;
    case 0x388:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x8774fa;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_00876c6c;
      piStack_14c = (int *)0x87750a;
      local_13c = (int *)FUN_00879ae0();
      goto LAB_00876c72;
    case 0x39f:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x87704b;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087707b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CWarexhaustionEffect::vftable;
      goto LAB_00877081;
    case 0x3b3:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x87751c;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x87752c;
      local_13c = (int *)FUN_0087a120();
      break;
    case 0x3dc:
      piStack_14c = (int *)0x4c;
      iStack_150 = 0x8773ee;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008773ac;
      piStack_14c = (int *)0x8773fa;
      local_130 = (int *)FUN_00885a30();
      goto LAB_008783ca;
    case 0x3ea:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x87716a;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x1;
      iStack_150 = 0x877178;
      local_13c = (int *)FUN_00880dd0();
      break;
    case 0x3ed:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x8770fb;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CPrestigeEffect::vftable;
      break;
    case 0x3ef:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x877187;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) goto LAB_008771b6;
      local_130[2] = 0;
      local_130[3] = 0;
      local_130[4] = 0;
      *(undefined1 *)(local_130 + 5) = 0;
      local_130[1] = 0x18d;
      *(undefined2 *)(local_130 + 7) = 0;
      local_130[9] = 0;
      local_130[8] = 0;
      *local_130 = (int)CAddProvinceModifierEffect::vftable;
      goto LAB_008771b8;
    case 0x3f0:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x87722a;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) {
        local_130 = (int *)0x0;
      }
      else {
        local_130[2] = 0;
        local_130[3] = 0;
        local_130[4] = 0;
        *(undefined1 *)(local_130 + 5) = 0;
        local_130[1] = 0x18d;
        *(undefined2 *)(local_130 + 7) = 0;
        local_130[9] = 0;
        local_130[8] = 0;
        *local_130 = (int)CAddCountryModifierEffect::vftable;
      }
      local_138 = *(int **)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x87726d;
      puVar4 = (undefined4 *)FUN_00aae9af();
      if (puVar4 == (undefined4 *)0x0) goto LAB_008771e3;
      *puVar4 = local_130;
      puVar4[1] = local_138;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      goto LAB_008771e5;
    case 0x3ff:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x877408;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) {
        local_130 = (int *)0x0;
      }
      else {
        local_130[2] = 0;
        local_130[3] = 0;
        local_130[4] = 0;
        *(undefined1 *)(local_130 + 5) = 0;
        local_130[1] = 0x18d;
        *(undefined2 *)(local_130 + 7) = 0;
        local_130[8] = 0;
        local_130[9] = 0;
        *local_130 = (int)CCountryEventEffect::vftable;
      }
      iVar3 = *(int *)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x87744b;
      puVar4 = (undefined4 *)FUN_00aae9af();
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = local_130;
        puVar4[1] = iVar3;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
      iVar5 = *(int *)(in_ECX + 0x10);
      *(undefined4 **)(in_ECX + 0xc) = puVar4;
      *(int *)(in_ECX + 0x10) = iVar5 + 1;
      if (iVar5 == 0) {
        *(undefined4 **)(in_ECX + 8) = puVar4;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar4;
      }
      if (*(int *)(param_1 + 0x228) == 3) {
        piStack_14c = (int *)param_1;
        iStack_150 = 0x877498;
        (**(code **)(*local_130 + 0xc))();
      }
      else {
        piStack_14c = (int *)(param_1 + 0x22c);
        iStack_150 = 0x8774a8;
        iVar3 = FUN_00aaf0c5();
        local_130[8] = iVar3;
        local_130[9] = 0;
      }
      goto LAB_00878d5a;
    case 0x400:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x8774bd;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) goto LAB_008771b6;
      local_130[2] = 0;
      local_130[3] = 0;
      local_130[4] = 0;
      *(undefined1 *)(local_130 + 5) = 0;
      local_130[1] = 0x18d;
      *(undefined2 *)(local_130 + 7) = 0;
      local_130[8] = 0;
      local_130[9] = 0;
      *local_130 = (int)CProvinceEventEffect::vftable;
      goto LAB_008771b8;
    case 0x401:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x8773ba;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008773ac;
      piStack_14c = (int *)0x8773c6;
      local_130 = (int *)FUN_008797a0();
      goto LAB_008783ca;
    case 0x402:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x8773d4;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008773ac;
      piStack_14c = (int *)0x8773e0;
      local_130 = (int *)FUN_008797e0();
      goto LAB_008783ca;
    case 0x403:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x877369;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      if (local_130 == (int *)0x0) goto LAB_008773ac;
      local_130[2] = 0;
      local_130[3] = 0;
      local_130[4] = 0;
      *(undefined1 *)(local_130 + 5) = 0;
      local_130[1] = 0x18d;
      *local_130 = (int)CRelationEffect::vftable;
      local_130[8] = 0x2d2d2d;
      local_130[9] = 0;
      local_130[10] = 0;
      *(undefined2 *)(local_130 + 7) = 0;
LAB_008783ca:
      local_138 = *(int **)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x8783dc;
      puVar4 = (undefined4 *)FUN_00aae9af();
      if (puVar4 == (undefined4 *)0x0) goto LAB_008771e3;
      *puVar4 = local_130;
      puVar4[1] = local_138;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
      goto LAB_008771e5;
    case 0x40b:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x877294;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[0xd] = 0xf;
      local_13c[0xc] = 0;
      *(undefined1 *)(local_13c + 8) = 0;
      *local_13c = (int)CSetCountryFlagEffect::vftable;
      goto LAB_00876c72;
    case 0x40c:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x8772dd;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087712b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[0xd] = 0xf;
      local_13c[0xc] = 0;
      *(undefined1 *)(local_13c + 8) = 0;
      *local_13c = (int)CClrCountryFlagEffect::vftable;
      break;
    case 0x416:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x87753e;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x87754e;
      local_130 = (int *)FUN_00876080();
      goto LAB_008771b8;
    }
    goto LAB_00877131;
  }
  if (param_2 < 0x586) {
    if (param_2 == 0x585) {
      piStack_14c = (int *)0x28;
      iStack_150 = 0x8778a8;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x8778b8;
      local_13c = (int *)FUN_00879be0();
      goto LAB_00877131;
    }
    switch(param_2) {
    case 0x43a:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x877886;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x877896;
      local_13c = (int *)FUN_0087a1c0();
      goto LAB_00877131;
    default:
      goto switchD_00876b87_caseD_1c0;
    case 0x441:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x8775ad;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_0087707b;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      *(undefined2 *)(local_13c + 7) = 0;
      local_13c[8] = 0;
      *local_13c = (int)CCreateRevoltEffect::vftable;
      goto LAB_00877081;
    case 0x44e:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x87762a;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      local_13c[8] = 0x2d2d2d;
      local_13c[9] = 0;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CSecedeProvinceEffect::vftable;
      goto LAB_00876c72;
    case 0x44f:
      piStack_14c = (int *)0x2c;
      iStack_150 = 0x877679;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x0;
      iStack_150 = 0x87768a;
      local_13c = (int *)FUN_00887fa0();
      goto LAB_00877131;
    case 0x450:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x87769c;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      local_13c[8] = 0x2d2d2d;
      local_13c[9] = 0;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CReleaseEffect::vftable;
      goto LAB_00876c72;
    case 0x452:
      piStack_14c = (int *)0x4c;
      iStack_150 = 0x8775eb;
      ExceptionList = &local_14;
      local_130 = (int *)FUN_00aae9af();
      local_c = 1;
      if (local_130 == (int *)0x0) goto LAB_00877350;
      iStack_150 = 0x87760d;
      piStack_14c = local_130;
      FUN_0089c770();
      *local_130 = (int)CReversedCasusBelliEffect::vftable;
      local_c = 0xffffffff;
      break;
    case 0x456:
      piStack_14c = (int *)0x3c;
      iStack_150 = 0x8776eb;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x8776fb;
      local_130 = (int *)FUN_00879640();
      break;
    case 0x457:
      piStack_14c = (int *)0x4c;
      iStack_150 = 0x877709;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) {
LAB_008773ac:
        local_130 = (int *)0x0;
      }
      else {
        piStack_14c = (int *)0x877719;
        local_130 = (int *)FUN_00879700();
      }
      goto LAB_008783ca;
    case 0x458:
      goto switchD_0087759f_caseD_458;
    case 0x459:
      piStack_14c = (int *)0x4c;
      iStack_150 = 0x877727;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008773ac;
      piStack_14c = (int *)0x877737;
      local_130 = (int *)FUN_00879820();
      goto LAB_008783ca;
    case 0x486:
      piStack_14c = (int *)0x28;
      iStack_150 = 0x877745;
      ExceptionList = &local_14;
      local_13c = (int *)FUN_00aae9af();
      if (local_13c == (int *)0x0) goto LAB_00876c6c;
      local_13c[2] = 0;
      local_13c[3] = 0;
      local_13c[4] = 0;
      *(undefined1 *)(local_13c + 5) = 0;
      local_13c[1] = 0x18d;
      local_13c[8] = 0x2d2d2d;
      local_13c[9] = 0;
      *(undefined2 *)(local_13c + 7) = 0;
      *local_13c = (int)CChangeControllerEffect::vftable;
      goto LAB_00876c72;
    case 0x49d:
      piStack_14c = (int *)0x40;
      iStack_150 = 0x877794;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x8777a4;
      local_130 = (int *)FUN_00879940();
      break;
    case 0x49e:
      piStack_14c = (int *)0x40;
      iStack_150 = 0x8777b2;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008777cc;
      piStack_14c = (int *)0x8777be;
      local_130 = (int *)FUN_00879970();
      local_138 = *(int **)(in_ECX + 0xc);
      goto LAB_00878365;
    case 0x4a0:
      piStack_14c = (int *)0x34;
      iStack_150 = 0x8777e1;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008777cc;
      piStack_14c = (int *)0x8777ed;
      local_130 = (int *)FUN_0088edf0();
      local_138 = *(int **)(in_ECX + 0xc);
      goto LAB_00878365;
    case 0x4c6:
      piStack_14c = (int *)0x30;
      iStack_150 = 0x877846;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_008771b6;
      piStack_14c = (int *)0x877856;
      local_130 = (int *)FUN_00898bf0();
      break;
    case 0x4f0:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877824;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_0087712b;
      piStack_14c = (int *)0x877834;
      local_13c = (int *)FUN_00879df0();
      goto LAB_00877131;
    case 0x4f1:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877802;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_00878077;
      piStack_14c = (int *)0x877812;
      local_13c = (int *)FUN_00879cd0();
      goto LAB_0087807d;
    case 0x508:
      piStack_14c = (int *)0x24;
      iStack_150 = 0x877864;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) goto LAB_00878077;
      piStack_14c = (int *)0x877874;
      local_13c = (int *)FUN_00879e50();
      goto LAB_0087807d;
    }
    goto LAB_008771b8;
  }
  switch(param_2) {
  case 0x586:
    piStack_14c = (int *)0x28;
    iStack_150 = 0x87794e;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_0087712b;
    piStack_14c = (int *)0x87795e;
    local_13c = (int *)FUN_00879ba0();
    goto LAB_00877131;
  case 0x587:
    piStack_14c = (int *)0x28;
    iStack_150 = 0x87792c;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_0087712b;
    piStack_14c = (int *)0x87793c;
    local_13c = (int *)FUN_00879b60();
    goto LAB_00877131;
  case 0x588:
    piStack_14c = (int *)0x28;
    iStack_150 = 0x8778e8;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) {
LAB_0087707b:
      local_13c = (int *)0x0;
    }
    else {
      piStack_14c = (int *)0x8778f8;
      local_13c = (int *)FUN_00879aa0();
    }
LAB_00877081:
    local_138 = *(int **)(in_ECX + 0xc);
    piStack_14c = (int *)0x10;
    iStack_150 = 0x877093;
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_130 = local_13c;
    if (puVar4 == (undefined4 *)0x0) goto LAB_008770ac;
    *puVar4 = local_13c;
    puVar4[1] = local_138;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    goto LAB_008770ae;
  case 0x589:
    piStack_14c = (int *)0x28;
    iStack_150 = 0x87790a;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_0087712b;
    piStack_14c = (int *)0x87791a;
    local_13c = (int *)FUN_00879b20();
    goto LAB_00877131;
  default:
switchD_00876b87_caseD_1c0:
    piStack_14c = (int *)0x878947;
    ExceptionList = &local_14;
    FUN_009885d0();
    local_c = 0xe;
    piStack_14c = (int *)0x878957;
    FUN_004dad40();
    iStack_150 = 0x87895f;
    piStack_14c = (int *)local_12c;
    piVar2 = (int *)FUN_004dc420();
    if (piVar2 == (int *)0x0) {
      piStack_14c = (int *)0x878968;
      piVar2 = (int *)FUN_004dacc0();
    }
    if (piVar2 == (int *)0x0) {
LAB_00878a18:
      piStack_14c = (int *)0x878a1d;
      FUN_00576f80();
      piStack_14c = (int *)local_12c;
      iStack_150 = 0x878a2a;
      piVar2 = (int *)FUN_0057b0a0();
      if (piVar2 != (int *)0x0) {
        piStack_14c = (int *)0x878a39;
        cVar1 = (**(code **)(*piVar2 + 0x20))();
        if (cVar1 != '\0') {
          piStack_14c = (int *)0x28;
          iStack_150 = 0x878a44;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_0087899f;
          iStack_150 = 0x878a55;
          piStack_14c = piVar2;
          local_13c = (int *)FUN_008806e0();
          goto LAB_008789a5;
        }
      }
      piStack_14c = (int *)0x878a65;
      FUN_004ebcb0();
      piStack_14c = (int *)local_12c;
      iStack_150 = 0x878a6f;
      iVar3 = FUN_005677b0();
      if (iVar3 == 0) {
        if (DAT_0131bb34 == 0) {
          piStack_14c = (int *)0x188;
          iStack_150 = 0x878adb;
          iVar3 = FUN_00aae9af();
          local_c._0_1_ = 0xf;
          if (iVar3 == 0) {
            piStack_14c = (int *)0x0;
          }
          else {
            piStack_14c = (int *)0x878af5;
            piStack_14c = (int *)FUN_0041a160();
          }
          local_c = CONCAT31(local_c._1_3_,0xe);
          iStack_150 = 0x878b07;
          FUN_00423700();
        }
        piStack_14c = (int *)DAT_0131bb34;
        iStack_150 = 0x878b17;
        piVar2 = (int *)FUN_0096dc20();
        if (piVar2 == (int *)0x0) {
LAB_00878b76:
          piStack_14c = (int *)local_12c;
          iStack_150 = 0x878b8a;
          iVar3 = FUN_004a2f70();
          if (iVar3 != 0) {
            piStack_14c = (int *)0x40;
            iStack_150 = 0x878b97;
            iVar5 = FUN_00aae9af();
            if (iVar5 == 0) goto LAB_00878b42;
            iStack_150 = 0x878ba4;
            piStack_14c = (int *)iVar3;
            local_130 = (int *)FUN_00888b50();
            goto LAB_00878b44;
          }
          piStack_14c = (int *)local_12c;
          iStack_150 = 0x878bb7;
          iVar3 = FUN_00973bd0();
          if (iVar3 != 0) {
            piStack_14c = (int *)0x28;
            iStack_150 = 0x878bc4;
            iVar5 = FUN_00aae9af();
            if (iVar5 == 0) goto LAB_0087899f;
            iStack_150 = 0x878bd5;
            piStack_14c = (int *)iVar3;
            local_13c = (int *)FUN_008982f0();
            goto LAB_008789a5;
          }
          if (*(int *)(param_1 + 0x228) != 3) {
            piStack_14c = (int *)0x878cae;
            FUN_009885d0();
            piStack_14c = (int *)0x10004;
            iStack_150 = 0x143;
            local_c._0_1_ = 0x11;
            iStack_158 = 0x878ccd;
            pcStack_154 = auStack_110;
            FUN_004015b0();
            local_c._0_1_ = 0x12;
            iStack_160 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
            piStack_14c = *(int **)(iStack_160 + 8);
            pcStack_154 = " line : ";
            pcStack_15c = "\' in ";
            uStack_168 = 0x878d06;
            iStack_164 = param_1 + 0x24;
            iStack_158 = iStack_160;
            iStack_150 = iStack_160;
            uStack_168 = FUN_00987d20();
            uStack_16c = 0x878d0c;
            iStack_160 = FUN_00418e30();
            iStack_164 = 0x878d15;
            iStack_164 = FUN_00418e30();
            uStack_168 = 0x878d1d;
            iStack_158 = FUN_00989050();
            pcStack_15c = (char *)0x878d26;
            iStack_150 = FUN_00418e30();
            pcStack_154 = (undefined1 *)0x878d2f;
            piStack_14c = (int *)FUN_00455470();
            iStack_150 = 0x878d35;
            FUN_00401280();
            local_c = CONCAT31(local_c._1_3_,0x11);
            piStack_14c = (int *)0x878d48;
            FUN_00401650();
            piStack_14c = (int *)0x878d51;
            FUN_00408ad0();
            goto LAB_00878d55;
          }
          piStack_14c = (int *)0x24;
          iStack_150 = 0x878bf7;
          iVar3 = FUN_00aae9af();
          local_c._0_1_ = 0x10;
          if (iVar3 == 0) {
            local_130 = (int *)0x0;
          }
          else {
            puVar4 = (undefined4 *)(param_1 + 0x20);
            puVar6 = auStack_24c;
            for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            local_130 = (int *)FUN_0087c9a0(iVar3);
          }
          local_c = CONCAT31(local_c._1_3_,0xe);
          local_138 = *(int **)(in_ECX + 0xc);
          piStack_14c = (int *)0x10;
          iStack_150 = 0x878c47;
          puVar4 = (undefined4 *)FUN_00aae9af();
          if (puVar4 == (undefined4 *)0x0) goto LAB_00878c60;
          *puVar4 = local_130;
          puVar4[1] = local_138;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        else {
          piStack_14c = (int *)0x878b26;
          cVar1 = (**(code **)(*piVar2 + 0x18))();
          if (cVar1 == '\0') goto LAB_00878b76;
          piStack_14c = (int *)0x40;
          iStack_150 = 0x878b31;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) {
LAB_00878b42:
            local_130 = (int *)0x0;
          }
          else {
            iStack_150 = 0x878b3e;
            piStack_14c = piVar2;
            local_130 = (int *)FUN_0089b4b0();
          }
LAB_00878b44:
          local_138 = *(int **)(in_ECX + 0xc);
          piStack_14c = (int *)0x10;
          iStack_150 = 0x878b56;
          puVar4 = (undefined4 *)FUN_00aae9af();
          if (puVar4 == (undefined4 *)0x0) {
LAB_00878c60:
            puVar4 = (undefined4 *)0x0;
          }
          else {
            *puVar4 = local_130;
            puVar4[1] = local_138;
            puVar4[2] = 0;
            *(undefined1 *)(puVar4 + 3) = 0;
          }
        }
        *(undefined4 **)(in_ECX + 0xc) = puVar4;
        iVar3 = *(int *)(in_ECX + 0x10);
        *(int *)(in_ECX + 0x10) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(in_ECX + 8) = puVar4;
          piStack_14c = (int *)param_1;
          iStack_150 = 0x878c9b;
          (**(code **)(*local_130 + 0xc))();
        }
        else {
          *(undefined4 **)((int)local_138 + 8) = puVar4;
          piStack_14c = (int *)param_1;
          iStack_150 = 0x878c86;
          (**(code **)(*local_130 + 0xc))();
        }
        goto LAB_00878d55;
      }
      piStack_14c = (int *)0x28;
      iStack_150 = 0x878a7c;
      iVar5 = FUN_00aae9af();
      if (iVar5 == 0) {
        local_13c = (int *)0x0;
      }
      else {
        iStack_150 = 0x878a89;
        piStack_14c = (int *)iVar3;
        local_13c = (int *)FUN_0087df90();
      }
      local_138 = *(int **)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x878aa9;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_130 = local_13c;
      if (puVar4 == (undefined4 *)0x0) goto LAB_008789d0;
      *puVar4 = local_13c;
      puVar4[1] = local_138;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    else {
      piStack_14c = (int *)0x87897b;
      cVar1 = (**(code **)(*piVar2 + 0x24))();
      if (cVar1 == '\0') goto LAB_00878a18;
      piStack_14c = (int *)0x28;
      iStack_150 = 0x87898a;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) {
LAB_0087899f:
        local_13c = (int *)0x0;
      }
      else {
        iStack_150 = 0x878997;
        piStack_14c = piVar2;
        local_13c = (int *)FUN_00891c70();
      }
LAB_008789a5:
      local_138 = *(int **)(in_ECX + 0xc);
      piStack_14c = (int *)0x10;
      iStack_150 = 0x8789b7;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_130 = local_13c;
      if (puVar4 == (undefined4 *)0x0) {
LAB_008789d0:
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = local_13c;
        puVar4[1] = local_138;
        puVar4[2] = 0;
        *(undefined1 *)(puVar4 + 3) = 0;
      }
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar4;
    iVar3 = *(int *)(in_ECX + 0x10);
    *(int *)(in_ECX + 0x10) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(in_ECX + 8) = puVar4;
    }
    else {
      *(undefined4 **)((int)local_138 + 8) = puVar4;
    }
    iVar3 = *local_130;
    puVar4 = (undefined4 *)(param_1 + 0x228);
    puVar6 = auStack_24c;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(iVar3 + 0x1c))();
LAB_00878d55:
    piStack_14c = (int *)0x878d5a;
    FUN_00408ad0();
    goto LAB_00878d5a;
  case 0x613:
    piStack_14c = (int *)0x24;
    iStack_150 = 0x8779e6;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_0087712b;
    piStack_14c = (int *)0x8779f6;
    local_13c = (int *)FUN_00879eb0();
    goto LAB_00877131;
  case 0x63d:
    piStack_14c = (int *)0x30;
    iStack_150 = 0x877a08;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008771b6;
    piStack_14c = (int *)0x877a18;
    local_130 = (int *)FUN_008a1b40();
    goto LAB_008771b8;
  case 0x63f:
    piStack_14c = (int *)0x24;
    iStack_150 = 0x8779ab;
    ExceptionList = &local_14;
    local_13c = (int *)FUN_00aae9af();
    if (local_13c == (int *)0x0) goto LAB_0087712b;
    local_13c[2] = 0;
    local_13c[3] = 0;
    local_13c[4] = 0;
    *(undefined1 *)(local_13c + 5) = 0;
    local_13c[1] = 0x18d;
    *(undefined2 *)(local_13c + 7) = 0;
    *local_13c = (int)CRulingPartyIdeologyEffect::vftable;
    goto LAB_00877131;
  case 0x641:
    piStack_14c = (int *)0x24;
    iStack_150 = 0x877970;
    ExceptionList = &local_14;
    local_13c = (int *)FUN_00aae9af();
    if (local_13c == (int *)0x0) goto LAB_0087712b;
    local_13c[2] = 0;
    local_13c[3] = 0;
    local_13c[4] = 0;
    *(undefined1 *)(local_13c + 5) = 0;
    local_13c[1] = 0x18d;
    *(undefined2 *)(local_13c + 7) = 0;
    *local_13c = (int)CEnableIdeologyEffect::vftable;
LAB_00877131:
    local_138 = *(int **)(in_ECX + 0xc);
    piStack_14c = (int *)0x10;
    iStack_150 = 0x877143;
    puVar4 = (undefined4 *)FUN_00aae9af();
    local_130 = local_13c;
    if (puVar4 == (undefined4 *)0x0) {
LAB_008770ac:
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = local_13c;
      puVar4[1] = local_138;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
LAB_008770ae:
    *(undefined4 **)(in_ECX + 0xc) = puVar4;
    iVar3 = *(int *)(in_ECX + 0x10);
    *(int *)(in_ECX + 0x10) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 **)(in_ECX + 8) = puVar4;
    }
    else {
      *(undefined4 **)((int)local_138 + 8) = puVar4;
    }
LAB_008770ce:
    iVar3 = *local_130;
    puVar4 = (undefined4 *)(param_1 + 0x228);
    puVar6 = auStack_24c;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    (**(code **)(iVar3 + 0x1c))();
    goto LAB_00878d5a;
  case 0x64b:
    piStack_14c = (int *)0x4c;
    iStack_150 = 0x877b04;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) {
LAB_008777cc:
      local_138 = *(int **)(in_ECX + 0xc);
      local_130 = (int *)0x0;
    }
    else {
      piStack_14c = (int *)0x877b14;
      local_130 = (int *)FUN_0087a070();
      local_138 = *(int **)(in_ECX + 0xc);
    }
    break;
  case 0x656:
    piStack_14c = (int *)0x3c;
    iStack_150 = 0x877a26;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008777cc;
    piStack_14c = (int *)0x877a36;
    local_130 = (int *)FUN_00879ee0();
    local_138 = *(int **)(in_ECX + 0xc);
    break;
  case 0x65a:
    piStack_14c = (int *)0x40;
    iStack_150 = 0x877a4b;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008777cc;
    piStack_14c = (int *)0x877a5b;
    local_130 = (int *)FUN_008760b0();
    local_138 = *(int **)(in_ECX + 0xc);
    break;
  case 0x65b:
    piStack_14c = (int *)0x40;
    iStack_150 = 0x877a70;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008777cc;
    piStack_14c = (int *)0x877a80;
    local_130 = (int *)FUN_00876180();
    local_138 = *(int **)(in_ECX + 0xc);
    break;
  case 0x65c:
    piStack_14c = (int *)0x40;
    iStack_150 = 0x877a95;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008777cc;
    piStack_14c = (int *)0x877aa5;
    local_130 = (int *)FUN_008761c0();
    local_138 = *(int **)(in_ECX + 0xc);
    break;
  case 0x65d:
    piStack_14c = (int *)0x38;
    iStack_150 = 0x877aba;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008777cc;
    piStack_14c = (int *)0x877aca;
    local_130 = (int *)FUN_00879f20();
    local_138 = *(int **)(in_ECX + 0xc);
    break;
  case 0x65e:
    piStack_14c = (int *)0x38;
    iStack_150 = 0x877adf;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 == 0) goto LAB_008777cc;
    piStack_14c = (int *)0x877aef;
    local_130 = (int *)FUN_00879f60();
    local_138 = *(int **)(in_ECX + 0xc);
  }
LAB_00878365:
  piStack_14c = (int *)0x10;
  iStack_150 = 0x878370;
  puVar4 = (undefined4 *)FUN_00aae9af();
  if (puVar4 == (undefined4 *)0x0) {
LAB_008771e3:
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = local_130;
    puVar4[1] = local_138;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
LAB_008771e5:
  *(undefined4 **)(in_ECX + 0xc) = puVar4;
  iVar3 = *(int *)(in_ECX + 0x10);
  *(int *)(in_ECX + 0x10) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined4 **)(in_ECX + 8) = puVar4;
    piStack_14c = (int *)param_1;
    iStack_150 = 0x87721e;
    (**(code **)(*local_130 + 0xc))();
  }
  else {
    *(undefined4 **)((int)local_138 + 8) = puVar4;
    piStack_14c = (int *)param_1;
    iStack_150 = 0x877209;
    (**(code **)(*local_130 + 0xc))();
  }
LAB_00878d5a:
  if (local_130 != (int *)0x0) {
    local_130[6] = param_2;
  }
  ExceptionList = local_14;
  return;
}

