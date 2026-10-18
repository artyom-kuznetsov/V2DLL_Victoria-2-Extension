// FUN_004d9310 @ 004d9310 body=[[004d9310, 004d94e9] [004d94f0, 004d95da] [004d95e0, 004d9a51]]


void FUN_004d9310(int param_1,int param_2)

{
  int iVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 *puVar9;
  int local_14c [72];
  undefined1 local_2c [16];
  int local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b53a8e;
  local_10 = ExceptionList;
  if (param_2 < 0x501) {
    if (param_2 == 0x500) {
      if (*(int *)(param_1 + 0x228) != 0x29f) {
        return;
      }
      *(undefined1 *)(in_ECX + 0xe1) = 1;
      return;
    }
    if (param_2 < 0x2a3) {
      if (param_2 == 0x2a2) {
        if (*(int *)(param_1 + 0x228) != 0x29f) {
          return;
        }
        *(undefined1 *)(in_ECX + 0xbc) = 1;
        return;
      }
      if (param_2 < 0x225) {
        if (param_2 == 0x224) {
          ExceptionList = &local_10;
          FUN_009a1ce0();
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0xbf) {
          ExceptionList = &local_10;
          FUN_009a1bb0(in_ECX + 0x129);
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0xc9) {
          if (*(int *)(param_1 + 0x228) != 0x29f) {
            return;
          }
          *(undefined1 *)(in_ECX + 0xbd) = 1;
          return;
        }
        if (param_2 == 0xd9) {
          ExceptionList = &local_10;
          FUN_009885d0();
          uVar3 = FUN_004da1c0();
          *(undefined4 *)(in_ECX + 0x10) = uVar3;
          FUN_00408ad0();
          ExceptionList = local_10;
          return;
        }
      }
      else {
        if (param_2 == 0x284) {
          ExceptionList = &local_10;
          FUN_009a1bb0(in_ECX + 0x128);
          ExceptionList = local_10;
          return;
        }
        if (param_2 == 0x297) {
          ExceptionList = &local_10;
          FUN_009a1bb0(in_ECX + 0x131);
          ExceptionList = local_10;
          return;
        }
      }
    }
    else {
      if (param_2 < 0x2af) {
        if (param_2 == 0x2ae) {
          ExceptionList = &local_10;
          uVar3 = FUN_00aaf0c5(param_1 + 0x22c);
          *(undefined4 *)(in_ECX + 0xb8) = uVar3;
          ExceptionList = local_10;
          return;
        }
        ppvVar2 = &local_10;
        if (param_2 == 0x2a5) {
          while( true ) {
            ExceptionList = ppvVar2;
            piVar7 = *(int **)(param_1 + 0x1c);
            if ((char)piVar7[0x44] == '\0') {
              iVar5 = (**(code **)(*piVar7 + 4))();
              piVar7[2] = iVar5;
              if (iVar5 == 0) {
                piVar7[3] = 0x13;
              }
              *(undefined1 *)(piVar7 + 0x44) = 1;
            }
            piVar7 = piVar7 + 3;
            piVar8 = local_14c;
            for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            if ((local_14c[0] == 4) || (local_14c[0] == 0x13)) break;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
            param_2 = FUN_00aae9af(0x1c);
            uVar3 = 0;
            local_8 = 0;
            if (param_2 != 0) {
              uVar3 = FUN_009885d0();
            }
            local_8 = 0xffffffff;
            iVar5 = *(int *)(in_ECX + 0xfc);
            puVar4 = (undefined4 *)FUN_00aae9af(0x10);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = uVar3;
              puVar4[1] = iVar5;
              puVar4[2] = 0;
              *(undefined1 *)(puVar4 + 3) = 0;
            }
            iVar6 = *(int *)(in_ECX + 0x100);
            *(undefined4 **)(in_ECX + 0xfc) = puVar4;
            *(int *)(in_ECX + 0x100) = iVar6 + 1;
            if (iVar6 == 0) {
              *(undefined4 **)(in_ECX + 0xf8) = puVar4;
              ppvVar2 = ExceptionList;
            }
            else {
              *(undefined4 **)(iVar5 + 8) = puVar4;
              ppvVar2 = ExceptionList;
            }
          }
        }
        else {
          ppvVar2 = &local_10;
          if (param_2 != 0x2a6) {
            if (param_2 == 0x2ad) {
              ExceptionList = &local_10;
              FUN_009a1ce0();
              ExceptionList = local_10;
              return;
            }
            goto switchD_004d9928_caseD_a25;
          }
          while( true ) {
            ExceptionList = ppvVar2;
            piVar7 = *(int **)(param_1 + 0x1c);
            if ((char)piVar7[0x44] == '\0') {
              iVar5 = (**(code **)(*piVar7 + 4))();
              piVar7[2] = iVar5;
              if (iVar5 == 0) {
                piVar7[3] = 0x13;
              }
              *(undefined1 *)(piVar7 + 0x44) = 1;
            }
            piVar7 = piVar7 + 3;
            piVar8 = local_14c;
            for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar8 = *piVar7;
              piVar7 = piVar7 + 1;
              piVar8 = piVar8 + 1;
            }
            if ((local_14c[0] == 4) || (local_14c[0] == 0x13)) break;
            (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
            param_2 = FUN_00aae9af(0x1c);
            local_8 = 1;
            if (param_2 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_009885d0();
            }
            local_8 = 0xffffffff;
            iVar5 = *(int *)(in_ECX + 0x11c);
            puVar4 = (undefined4 *)FUN_00aae9af(0x10);
            if (puVar4 == (undefined4 *)0x0) {
              puVar4 = (undefined4 *)0x0;
            }
            else {
              *puVar4 = uVar3;
              puVar4[1] = iVar5;
              puVar4[2] = 0;
              *(undefined1 *)(puVar4 + 3) = 0;
            }
            iVar6 = *(int *)(in_ECX + 0x120);
            *(undefined4 **)(in_ECX + 0x11c) = puVar4;
            *(int *)(in_ECX + 0x120) = iVar6 + 1;
            if (iVar6 == 0) {
              *(undefined4 **)(in_ECX + 0x118) = puVar4;
              ppvVar2 = ExceptionList;
            }
            else {
              *(undefined4 **)(iVar5 + 8) = puVar4;
              ppvVar2 = ExceptionList;
            }
          }
        }
        (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 0x3f9) {
        if (*(int *)(param_1 + 0x228) != 0x29f) {
          return;
        }
        *(undefined1 *)(in_ECX + 0xe0) = 1;
        return;
      }
      if (param_2 == 0x4f1) {
        ExceptionList = &local_10;
        FUN_009a1ce0();
        ExceptionList = local_10;
        return;
      }
    }
  }
  else if (param_2 < 0xa07) {
    if (param_2 == 0xa06) {
      ExceptionList = &local_10;
      FUN_005e5a20(param_1,in_ECX + 200);
      ExceptionList = local_10;
      return;
    }
    if (param_2 < 0x854) {
      if (param_2 == 0x853) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x130);
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 0x5ee) {
        ExceptionList = &local_10;
        uVar3 = FUN_00aaf0c5(param_1 + 0x22c);
        *(undefined4 *)(in_ECX + 0xc4) = uVar3;
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 2000) {
        ExceptionList = &local_10;
        (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))(param_1);
        ExceptionList = local_10;
        return;
      }
      local_1c = param_2 + -0x839;
      if (local_1c == 0) {
        local_18 = 0xf;
        local_2c[0] = 0;
        local_8 = 2;
        ExceptionList = &local_10;
        FUN_009a1750(local_2c,0);
        puVar9 = local_2c;
        uVar3 = FUN_004de580(puVar9);
        uVar3 = FUN_004de9a0(uVar3,puVar9);
        *(undefined4 *)(in_ECX + 300) = uVar3;
        FUN_00408ad0();
        ExceptionList = local_10;
        return;
      }
    }
    else {
      if (param_2 == 0x85c) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x138);
        ExceptionList = local_10;
        return;
      }
      if (param_2 == 0x8eb) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x139);
        ExceptionList = local_10;
        return;
      }
    }
  }
  else {
    switch(param_2) {
    case 0xa24:
      if (*(int *)(param_1 + 0x228) != 0x29f) {
        return;
      }
      *(undefined1 *)(in_ECX + 0xbe) = 1;
      return;
    case 0xa3c:
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x13a);
      ExceptionList = local_10;
      return;
    case 0xa3d:
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0x13b);
      ExceptionList = local_10;
      return;
    case 0xa57:
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0xd8);
      ExceptionList = local_10;
      return;
    case 0xa5a:
      ExceptionList = &local_10;
      FUN_009a1bb0(in_ECX + 0xd9);
      ExceptionList = local_10;
      return;
    }
  }
switchD_004d9928_caseD_a25:
  iVar6 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  iVar5 = 0;
  if (0 < iVar6) {
    while (iVar1 = *(int *)(DAT_0125a5b4 + iVar5 * 4),
          *(int *)(iVar1 + 0x20) != *(int *)(param_1 + 0x20)) {
      iVar5 = iVar5 + 1;
      if (iVar6 <= iVar5) {
        return;
      }
    }
    ExceptionList = &local_10;
    *(int *)(in_ECX + 0xc) = iVar1;
    FUN_0098fb60(param_1 + 0x228,&param_1);
    *(int *)(in_ECX + 8) = param_1;
  }
  ExceptionList = local_10;
  return;
}

