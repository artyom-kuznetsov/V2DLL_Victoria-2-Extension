// FUN_00996b80 @ 00996b80 body=[[00996b80, 0099708b]]


void FUN_00996b80(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5df8b;
  local_10 = ExceptionList;
  if (param_2 < 0x136) {
    if (param_2 == 0x135) {
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x114);
      local_8 = 0xb;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a44ac0(iVar1,in_ECX);
        goto LAB_00997076;
      }
    }
    else {
      switch(param_2) {
      case 0x1d:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0xb8);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a499d0(in_ECX);
          goto LAB_00997076;
        }
        break;
      default:
        goto switchD_00996bc7_caseD_1e;
      case 0x35:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x1a0);
        local_8 = 3;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a28650(iVar1);
          goto LAB_00997076;
        }
        break;
      case 0x38:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(300);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a4ee20(*(undefined4 *)(in_ECX + 0x6b9c8),in_ECX + 0x6bcfc);
          goto LAB_00997076;
        }
        break;
      case 0x3a:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x130);
        local_8 = 6;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a4c3e0(iVar1,in_ECX,in_ECX + 0x6b83c);
          goto LAB_00997076;
        }
        break;
      case 0x42:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x81bb8);
        local_8 = 0;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a49150(iVar1);
          goto LAB_00997076;
        }
        break;
      case 0x43:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x1684);
        local_8 = 1;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a43b70(iVar1);
          goto LAB_00997076;
        }
        break;
      case 0x45:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x9c);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a480c0();
          goto LAB_00997076;
        }
        break;
      case 0x46:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x144);
        local_8 = 9;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a54e60(iVar1,in_ECX);
          goto LAB_00997076;
        }
        break;
      case 0x47:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0xdc);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a54780();
          goto LAB_00997076;
        }
        break;
      case 0x54:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x108);
        local_8 = 5;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a3d210(iVar1);
          goto LAB_00997076;
        }
        break;
      case 0x56:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x144);
        local_8 = 10;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a2f4b0(iVar1,in_ECX);
          goto LAB_00997076;
        }
        break;
      case 0x5a:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0xd8);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a3c0f0(in_ECX);
          goto LAB_00997076;
        }
        break;
      case 0x5d:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x90);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a45730(in_ECX);
          goto LAB_00997076;
        }
        break;
      case 99:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0xac);
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)FUN_00a53870(in_ECX);
          goto LAB_00997076;
        }
        break;
      case 0x118:
        ExceptionList = &local_10;
        iVar1 = FUN_00aae9af(0x234);
        local_8 = 7;
        if (iVar1 != 0) {
          puVar2 = (undefined4 *)
                   FUN_00a51450(iVar1,in_ECX,*(undefined4 *)(in_ECX + 0x6b9c8),in_ECX + 0x6bcfc);
          goto LAB_00997076;
        }
      }
    }
  }
  else {
    switch(param_2) {
    case 0x139:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x180);
      local_8 = 0xc;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a555b0(iVar1,in_ECX);
        goto LAB_00997076;
      }
      break;
    default:
switchD_00996bc7_caseD_1e:
      ExceptionList = &local_10;
      FUN_009a0f40();
      break;
    case 0x14e:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x26b0);
      local_8 = 8;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a20db0(iVar1);
        goto LAB_00997076;
      }
      break;
    case 0x151:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x1ac);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a3c5e0();
        goto LAB_00997076;
      }
      break;
    case 0x156:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x1684);
      local_8 = 2;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a43b70(iVar1);
        goto LAB_00997076;
      }
      break;
    case 0x178:
      ExceptionList = &local_10;
      puVar2 = (undefined4 *)FUN_00aae9af(0x1b0);
      local_8 = 4;
      if (puVar2 != (undefined4 *)0x0) {
        FUN_00a28650(puVar2);
        *puVar2 = &PTR_FUN_00e41028;
        puVar2[0x68] = 0;
        puVar2[0x69] = 0;
        goto LAB_00997076;
      }
      break;
    case 0x17b:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x60);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a46950(in_ECX);
        goto LAB_00997076;
      }
      break;
    case 0x17d:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x134);
      local_8 = 0xd;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a2fb10(iVar1,in_ECX);
        goto LAB_00997076;
      }
      break;
    case 0x185:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x120);
      local_8 = 0xe;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a4de30(iVar1,in_ECX);
        goto LAB_00997076;
      }
      break;
    case 0x18e:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x80);
      local_8 = 0xf;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a3b890(iVar1);
        goto LAB_00997076;
      }
      break;
    case 400:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x88);
      local_8 = 0x10;
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a53a70(iVar1);
        goto LAB_00997076;
      }
      break;
    case 0x1ab:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x130);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a3f160(in_ECX);
        goto LAB_00997076;
      }
      break;
    case 0x1ac:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0xd0);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_0098c520(in_ECX);
        goto LAB_00997076;
      }
      break;
    case 0x1ad:
      ExceptionList = &local_10;
      iVar1 = FUN_00aae9af(0x98);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)FUN_00a3b490(in_ECX);
        goto LAB_00997076;
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
LAB_00997076:
  puVar2[1] = param_2;
  ExceptionList = local_10;
  return;
}

