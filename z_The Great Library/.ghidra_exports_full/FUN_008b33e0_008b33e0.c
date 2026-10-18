// FUN_008b33e0 @ 008b33e0 body=[[008b33e0, 008b606a]]


void FUN_008b33e0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_3ec [56];
  undefined4 uStack_30c;
  undefined4 uStack_308;
  int iStack_304;
  int iStack_300;
  undefined *puStack_2fc;
  int iStack_2f8;
  char *pcStack_2f4;
  int iStack_2f0;
  int *piStack_2ec;
  int *local_2dc;
  undefined1 local_2cc [28];
  undefined1 local_2b0 [28];
  undefined1 auStack_294 [57];
  char cStack_25b;
  undefined1 auStack_128 [16];
  void *pvStack_118;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba39f8;
  local_14 = ExceptionList;
  if (param_2 < 0x663) {
    if (param_2 == 0x662) {
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4565;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4577;
        piVar5 = (int *)FUN_008fd870();
        goto LAB_008b3499;
      }
      goto LAB_008b3497;
    }
    if (param_2 < 0x334) {
      if (param_2 == 0x333) {
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b39a2;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b39b4;
          piVar5 = (int *)FUN_008b6e10();
          goto LAB_008b3499;
        }
        goto LAB_008b3497;
      }
      if (param_2 < 0x218) {
        if (param_2 == 0x217) {
          piStack_2ec = (int *)0x20;
          iStack_2f0 = 0x8b3714;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 != 0) {
            piStack_2ec = (int *)0x8b3726;
            piVar5 = (int *)FUN_008b7a90();
            goto LAB_008b3499;
          }
        }
        else if (param_2 < 0x10b) {
          if (param_2 == 0x10a) {
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b354d;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b355f;
              piVar5 = (int *)FUN_008b7be0();
              goto LAB_008b3499;
            }
          }
          else {
            switch(param_2) {
            case 0x77:
              piStack_2ec = (int *)0x20;
              iStack_2f0 = 0x8b3472;
              ExceptionList = &local_14;
              piVar5 = (int *)FUN_00aae9af();
              if (piVar5 != (int *)0x0) {
                piVar5[1] = 0x18d;
                piVar5[2] = 0;
                piVar5[3] = 0;
                piVar5[4] = 0;
                *(undefined2 *)(piVar5 + 6) = 0;
                *piVar5 = (int)CYearTrigger::vftable;
                goto LAB_008b3499;
              }
              break;
            case 0x78:
              piStack_2ec = (int *)0x20;
              iStack_2f0 = 0x8b34ee;
              ExceptionList = &local_14;
              piVar5 = (int *)FUN_00aae9af();
              if (piVar5 != (int *)0x0) {
                piVar5[1] = 0x18d;
                piVar5[2] = 0;
                piVar5[3] = 0;
                piVar5[4] = 0;
                *(undefined2 *)(piVar5 + 6) = 0;
                *piVar5 = (int)CMonthTrigger::vftable;
                goto LAB_008b3499;
              }
              break;
            default:
              goto switchD_008b3464_caseD_79;
            case 0xc9:
              piStack_2ec = (int *)0x20;
              iStack_2f0 = 0x8b351a;
              ExceptionList = &local_14;
              piVar5 = (int *)FUN_00aae9af();
              if (piVar5 != (int *)0x0) {
                piVar5[1] = 0x18d;
                piVar5[2] = 0;
                piVar5[3] = 0;
                piVar5[4] = 0;
                *(undefined2 *)(piVar5 + 6) = 0;
                *piVar5 = (int)CPortTrigger::vftable;
                goto LAB_008b3499;
              }
              break;
            case 0xd9:
              goto switchD_008b3464_caseD_d9;
            }
          }
        }
        else {
          switch(param_2) {
          case 0x1be:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b36f6;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b3708;
              piVar5 = (int *)FUN_008b7b60();
              goto LAB_008b3499;
            }
            break;
          default:
            goto switchD_008b3464_caseD_79;
          case 0x1c1:
            piStack_2ec = (int *)0x3c;
            iStack_2f0 = 0x8b3587;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CInventionTrigger::vftable;
              piVar5[0xd] = 0xf;
              piVar5[0xc] = 0;
              *(undefined1 *)(piVar5 + 8) = 0;
              goto LAB_008b3499;
            }
            break;
          case 0x1cb:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b36d8;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b36ea;
              piVar5 = (int *)FUN_008b7a10();
              goto LAB_008b3499;
            }
            break;
          case 0x1cc:
            piStack_2ec = (int *)0x24;
            iStack_2f0 = 0x8b3618;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b362a;
              piVar5 = (int *)FUN_008b6e90();
              goto LAB_008b3499;
            }
            break;
          case 0x1cd:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b3636;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CHasEmptyAdjacentStateTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x1ce:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b3669;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CStateWithProvinceIdTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x1d3:
            piStack_2ec = (int *)0x28;
            iStack_2f0 = 0x8b36ba;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b36cc;
              piVar5 = (int *)FUN_008b72b0();
              goto LAB_008b3499;
            }
            break;
          case 0x1db:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b35c7;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CStrataTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x1e9:
            piStack_2ec = (int *)0x28;
            iStack_2f0 = 0x8b369c;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b36ae;
              piVar5 = (int *)FUN_008b71f0();
              goto LAB_008b3499;
            }
            break;
          case 0x1ec:
            piStack_2ec = (int *)0x28;
            iStack_2f0 = 0x8b35fa;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b360c;
              piVar5 = (int *)FUN_008b6d50();
              goto LAB_008b3499;
            }
          }
        }
        goto LAB_008b3497;
      }
      switch(param_2) {
      case 0x22e:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b390c;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b391e;
          piVar5 = (int *)FUN_008ff590();
          goto LAB_008b3499;
        }
        break;
      default:
        goto switchD_008b3464_caseD_79;
      case 0x230:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b392a;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b393c;
          piVar5 = (int *)FUN_008b7ad0();
          goto LAB_008b3a01;
        }
        goto LAB_008b39ff;
      case 0x233:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b3948;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b395a;
          piVar5 = (int *)FUN_008b7b00();
          goto LAB_008b3499;
        }
        break;
      case 0x234:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b3966;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b3978;
          piVar5 = (int *)FUN_008f6820();
          goto LAB_008b3499;
        }
        break;
      case 0x235:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b3876;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b3888;
          piVar5 = (int *)FUN_008b7140();
          goto LAB_008b3499;
        }
        break;
      case 0x23a:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b3783;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b3795;
          piVar5 = (int *)FUN_008c8400();
          goto LAB_008b3a01;
        }
        goto LAB_008b39ff;
      case 0x23b:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b3984;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b3996;
          piVar5 = (int *)FUN_008b7b20();
          goto LAB_008b3499;
        }
        break;
      case 599:
        goto switchD_008b3742_caseD_257;
      case 0x25e:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b37d4;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b37e6;
          piVar5 = (int *)FUN_00900d80();
          goto LAB_008b3499;
        }
        break;
      case 0x263:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b38ee;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b3900;
          piVar5 = (int *)FUN_008b7540();
          goto LAB_008b3499;
        }
        break;
      case 0x28c:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b3858;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b386a;
          piVar5 = (int *)FUN_008b7120();
          goto LAB_008b3499;
        }
        break;
      case 0x28d:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b37f2;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CPrimaryCultureTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x28e:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b3825;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CAcceptedCultureTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x292:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b3894;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b38a6;
          piVar5 = (int *)FUN_008b7160();
          goto LAB_008b3499;
        }
        break;
      case 0x29c:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b38d0;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b38e2;
          piVar5 = (int *)FUN_008b7480();
          goto LAB_008b3499;
        }
        break;
      case 0x2a2:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b37a1;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CCapitalTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x2b4:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b38b2;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b38c4;
          piVar5 = (int *)FUN_008b7180();
          goto LAB_008b3499;
        }
        break;
      case 0x2bf:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b3750;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CGovernmentTrigger::vftable;
          goto LAB_008b3499;
        }
      }
      goto LAB_008b3497;
    }
    if (0x444 < param_2) {
      if (param_2 < 0x560) {
        if (param_2 == 0x55f) {
          piStack_2ec = (int *)0x24;
          iStack_2f0 = 0x8b42e5;
          ExceptionList = &local_14;
          iVar3 = FUN_00aae9af();
          if (iVar3 != 0) {
            piStack_2ec = (int *)0x8b42f7;
            piVar5 = (int *)FUN_008b6e50();
            goto LAB_008b3499;
          }
        }
        else {
          switch(param_2) {
          case 0x449:
            piStack_2ec = (int *)0x24;
            iStack_2f0 = 0x8b40cc;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b40de;
              piVar5 = (int *)FUN_008d3f10();
              goto LAB_008b3499;
            }
            break;
          default:
            goto switchD_008b3464_caseD_79;
          case 0x45a:
            piStack_2ec = (int *)0x24;
            iStack_2f0 = 0x8b40ea;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b40fc;
              piVar5 = (int *)FUN_008d45e0();
              goto LAB_008b3499;
            }
            break;
          case 0x478:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b4037;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CHasProvinceModifierTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x479:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b4004;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CHasCountryModifierTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x47d:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b4108;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CUnitsInProvinceTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x47f:
            piStack_2ec = (int *)0x24;
            iStack_2f0 = 0x8b413b;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b414d;
              piVar5 = (int *)FUN_008b6cd0();
              goto LAB_008b3499;
            }
            break;
          case 0x480:
            piStack_2ec = (int *)0x1c;
            iStack_2f0 = 0x8b4159;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CUnitInBattleTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x483:
            piStack_2ec = (int *)0x1c;
            iStack_2f0 = 0x8b418c;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CUnitHasLeaderTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x49c:
            piStack_2ec = (int *)0x3c;
            iStack_2f0 = 0x8b422e;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b4240;
              piVar5 = (int *)FUN_008da590();
              goto LAB_008b3a01;
            }
            goto LAB_008b39ff;
          case 0x4a2:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b406a;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CRegionTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x4a5:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b3f9e;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CEmptyTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x4a8:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b427f;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CIsMissionCountryTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x4a9:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b42b2;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CIsMissionProvinceTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x4aa:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b424c;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CIsVassalTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x4ae:
            piStack_2ec = (int *)0x1c;
            iStack_2f0 = 0x8b409d;
            ExceptionList = &local_14;
            piVar2 = (int *)FUN_00aae9af();
            piVar5 = (int *)0x0;
            if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
            piVar2[1] = 0x18d;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            *piVar2 = (int)CWarCountriesTrigger::vftable;
            goto LAB_008b3abf;
          case 0x4b0:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b3fd1;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CIsBlockadedTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x4f0:
            piStack_2ec = (int *)0x28;
            iStack_2f0 = 0x8b41f2;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b4204;
              piVar5 = (int *)FUN_008b6d80();
              goto LAB_008b3499;
            }
            break;
          case 0x537:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b41bf;
            ExceptionList = &local_14;
            piVar5 = (int *)FUN_00aae9af();
            if (piVar5 != (int *)0x0) {
              piVar5[1] = 0x18d;
              piVar5[2] = 0;
              piVar5[3] = 0;
              piVar5[4] = 0;
              *(undefined2 *)(piVar5 + 6) = 0;
              *piVar5 = (int)CAmountOfDivisionsTrigger::vftable;
              goto LAB_008b3499;
            }
            break;
          case 0x53b:
            piStack_2ec = (int *)0x20;
            iStack_2f0 = 0x8b4210;
            ExceptionList = &local_14;
            iVar3 = FUN_00aae9af();
            if (iVar3 != 0) {
              piStack_2ec = (int *)0x8b4222;
              piVar5 = (int *)FUN_008b6df0();
              goto LAB_008b3499;
            }
          }
        }
        goto LAB_008b3497;
      }
      switch(param_2) {
      case 0x5ff:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b43fd;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b440f;
          piVar5 = (int *)FUN_008b6f30();
          goto LAB_008b3499;
        }
        break;
      default:
        goto switchD_008b3464_caseD_79;
      case 0x613:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b441b;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b442d;
          piVar5 = (int *)FUN_008b77a0();
          goto LAB_008b3499;
        }
        break;
      case 0x636:
        piStack_2ec = (int *)0x38;
        iStack_2f0 = 0x8b4352;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4364;
          piVar5 = (int *)FUN_008b6b60();
          goto LAB_008b3499;
        }
        break;
      case 0x63d:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b43a3;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b43b5;
          piVar5 = (int *)FUN_008fd270();
          goto LAB_008b3a01;
        }
        goto LAB_008b39ff;
      case 0x63f:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b431f;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CRulingPartyIdeologyTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x640:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4370;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CIdeologyEnabledTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x644:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b43c1;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b43d3;
          piVar5 = (int *)FUN_008b6ed0();
          goto LAB_008b3499;
        }
        break;
      case 0x645:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b43df;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b43f1;
          piVar5 = (int *)FUN_008b6f00();
          goto LAB_008b3499;
        }
        break;
      case 0x64d:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4457;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4469;
          piVar5 = (int *)FUN_008b77e0();
          goto LAB_008b3499;
        }
        break;
      case 0x64e:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4475;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4487;
          piVar5 = (int *)FUN_008b7800();
          goto LAB_008b3499;
        }
        break;
      case 0x64f:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4493;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b44a5;
          piVar5 = (int *)FUN_008b7820();
          goto LAB_008b3499;
        }
        break;
      case 0x650:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4439;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b444b;
          piVar5 = (int *)FUN_008b77c0();
          goto LAB_008b3499;
        }
        break;
      case 0x653:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b44b1;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b44c3;
          piVar5 = (int *)FUN_008b78d0();
          goto LAB_008b3499;
        }
        break;
      case 0x654:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b44cf;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b44e1;
          piVar5 = (int *)FUN_008b78f0();
          goto LAB_008b3499;
        }
        break;
      case 0x656:
        piStack_2ec = (int *)0x1c;
        iStack_2f0 = 0x8b44ed;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b44ff;
          piVar5 = (int *)FUN_008b7990();
          goto LAB_008b3a01;
        }
        goto LAB_008b39ff;
      case 0x657:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b450b;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b451d;
          piVar5 = (int *)FUN_008fbb60();
          goto LAB_008b3499;
        }
        break;
      case 0x658:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4529;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b453b;
          piVar5 = (int *)FUN_008b79b0();
          goto LAB_008b3499;
        }
        break;
      case 0x659:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4547;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4559;
          piVar5 = (int *)FUN_008b79e0();
          goto LAB_008b3499;
        }
      }
      goto LAB_008b3497;
    }
    if (param_2 == 0x444) {
      piStack_2ec = (int *)0x38;
      iStack_2f0 = 0x8b3f51;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3f63;
        piVar5 = (int *)FUN_008b6ca0();
        goto LAB_008b3499;
      }
      goto LAB_008b3497;
    }
    switch(param_2) {
    case 0x343:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b3ebb;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3ecd;
        piVar5 = (int *)FUN_008b6c20();
        goto LAB_008b3499;
      }
      break;
    default:
      goto switchD_008b3464_caseD_79;
    case 0x37d:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3b6b;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CBlockadeTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x388:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b3ed9;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3eeb;
        piVar5 = (int *)FUN_008b6db0();
        goto LAB_008b3499;
      }
      break;
    case 0x39f:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3b35;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CWarexhaustionTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3a3:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3e59;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CContinentTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3b3:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3f15;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3f27;
        piVar5 = (int *)FUN_008b7840();
        goto LAB_008b3499;
      }
      break;
    case 0x3bb:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b39ef;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b39fd;
        piVar5 = (int *)FUN_00449100();
        goto LAB_008b3a01;
      }
      goto LAB_008b39ff;
    case 0x3bc:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b3a3e;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      local_2dc = (int *)0x0;
      if (piVar5 == (int *)0x0) goto LAB_008b3a67;
      piVar5[1] = 0x18d;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *piVar5 = (int)COrTrigger::vftable;
      goto LAB_008b3a5d;
    case 0x3bd:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b3aa0;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_00aae9af();
      piVar5 = (int *)0x0;
      if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
      piVar2[1] = 0x18d;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *piVar2 = (int)CNotTrigger::vftable;
      goto LAB_008b3abf;
    case 0x3c9:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3ba1;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)COwnsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3ca:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3bd4;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CControlsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3cb:
      piStack_2ec = (int *)0x2c;
      iStack_2f0 = 0x8b3c07;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CIsCoreTrigger::vftable;
        piVar5[9] = 0x2d2d2d;
        piVar5[10] = 0;
        goto LAB_008b3499;
      }
      break;
    case 0x3cd:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3c4c;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfRevoltsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3ce:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3c7f;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CNumOfRevoltsFractionTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3cf:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3cb5;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfCitiesTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3d0:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3ce8;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfPortsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3d5:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3d1b;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfAlliesTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3d7:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3d4e;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfVassalsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3dc:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3b02;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CAtWarTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x3e9:
      piStack_2ec = (int *)0x28;
      iStack_2f0 = 0x8b3d9f;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3db1;
        piVar5 = (int *)FUN_008c39d0();
        goto LAB_008b3499;
      }
      break;
    case 0x3ed:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b3ef7;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3f09;
        piVar5 = (int *)FUN_008b7420();
        goto LAB_008b3499;
      }
      break;
    case 0x401:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b3dbd;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_00aae9af();
      piVar5 = (int *)0x0;
      if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
      piVar2[1] = 0x18d;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *piVar2 = (int)CAnyNeighborProvinceTrigger::vftable;
      goto LAB_008b3abf;
    case 0x402:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b3e8c;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_00aae9af();
      piVar5 = (int *)0x0;
      if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
      piVar2[1] = 0x18d;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *piVar2 = (int)CAnyNeighborCountryTrigger::vftable;
LAB_008b3abf:
      *(undefined2 *)(piVar2 + 6) = 0;
      piVar5 = piVar2;
LAB_008b3ac5:
      piStack_2ec = (int *)0x8b3ad5;
      FUN_0068f390();
      piStack_2ec = (int *)param_1;
      iStack_2f0 = 0x8b3ae4;
      (**(code **)(*piVar5 + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x403:
      piStack_2ec = (int *)0x28;
      iStack_2f0 = 0x8b3dec;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piStack_2ec = (int *)0x8b3dfa;
        piVar5 = (int *)FUN_008c72d0();
      }
      piStack_2ec = (int *)0x8b3e0e;
      FUN_0068f390();
      piStack_2ec = (int *)param_1;
      iStack_2f0 = 0x8b3e1d;
      (**(code **)(*piVar5 + 0xc))();
      ExceptionList = pvStack_18;
      return;
    case 0x40a:
      piStack_2ec = (int *)0x38;
      iStack_2f0 = 0x8b3e3b;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3e4d;
        piVar5 = (int *)FUN_008b6bc0();
        goto LAB_008b3499;
      }
      break;
    case 0x416:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b3f33;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3f45;
        piVar5 = (int *)FUN_008b31b0();
        goto LAB_008b3a01;
      }
      goto LAB_008b39ff;
    case 0x437:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b3d81;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b3d93;
        piVar5 = (int *)FUN_008c9700();
        goto LAB_008b3499;
      }
    }
    goto LAB_008b3497;
  }
  if (param_2 < 0x783) {
    if (param_2 == 0x782) {
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4b77;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CTotalNumOfPortsTrigger::vftable;
        goto LAB_008b3499;
      }
      goto LAB_008b3497;
    }
    switch(param_2) {
    case 0x670:
      piStack_2ec = (int *)0x28;
      iStack_2f0 = 0x8b49fa;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4a0c;
        piVar5 = (int *)FUN_008b7730();
        goto LAB_008b3499;
      }
      break;
    default:
      goto switchD_008b3464_caseD_79;
    case 0x677:
      piStack_2ec = (int *)0x28;
      iStack_2f0 = 0x8b4aff;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4b11;
        piVar5 = (int *)FUN_008b78a0();
        goto LAB_008b3499;
      }
      break;
    case 0x67c:
      piStack_2ec = (int *)0x30;
      iStack_2f0 = 0x8b4abc;
      ExceptionList = &local_14;
      piStack_2ec = (int *)FUN_00aae9af();
      local_c = 0;
      if (piStack_2ec != (int *)0x0) {
        iStack_2f0 = 0x8b4ad6;
        piVar5 = (int *)FUN_008ff7c0();
        local_c = 0xffffffff;
        goto LAB_008b3a01;
      }
      goto LAB_008b4ae6;
    case 0x687:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b47ee;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CHasPopTypeTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x68c:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4a18;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4a2a;
        piVar5 = (int *)FUN_008b7760();
        goto LAB_008b3499;
      }
      break;
    case 0x690:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b4998;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_00aae9af();
      piVar5 = (int *)0x0;
      if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
      piVar2[1] = 0x18d;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *piVar2 = (int)CAllCoreTrigger::vftable;
      goto LAB_008b3abf;
    case 0x69b:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4708;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CIsCanalEnabledTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6a7:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4b3b;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4b4d;
        piVar5 = (int *)FUN_008b7b40();
        goto LAB_008b3499;
      }
      break;
    case 0x6b3:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b46b7;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CControlledByRebelsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6b8:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b45b2;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CRebelPowerFractionTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6b9:
      piStack_2ec = (int *)0x30;
      iStack_2f0 = 0x8b4a54;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x0;
        iStack_2f0 = 0x8b4a6a;
        piVar5 = (int *)FUN_008b31d0();
        goto LAB_008b3499;
      }
      break;
    case 0x6ba:
      piStack_2ec = (int *)0x30;
      iStack_2f0 = 0x8b4a76;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x1;
        iStack_2f0 = 0x8b4a8d;
        piVar5 = (int *)FUN_008b31d0();
        goto LAB_008b3499;
      }
      break;
    case 0x6bb:
      piStack_2ec = (int *)0x30;
      iStack_2f0 = 0x8b4a99;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x2;
        iStack_2f0 = 0x8b4ab0;
        piVar5 = (int *)FUN_008b31d0();
        goto LAB_008b3499;
      }
      break;
    case 0x6bc:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4a36;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4a48;
        piVar5 = (int *)FUN_008b7780();
        goto LAB_008b3499;
      }
      break;
    case 0x6bd:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b47bb;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CTotalPopsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6bf:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b45e8;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CRecruitedPercentageTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6c1:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b49c7;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CHasRecentlyLostWarTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6c3:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b4b59;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4b6b;
        piVar5 = (int *)FUN_008b7c00();
        goto LAB_008b3499;
      }
      break;
    case 0x6c8:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b476a;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CIsStateCapitalTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6ce:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b461e;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CHasCultureCoreTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6df:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4821;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CHasEmptyAdjacentProvinceTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6e1:
      piStack_2ec = (int *)0x38;
      iStack_2f0 = 0x8b4854;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4866;
        piVar5 = (int *)FUN_008b6f50();
        goto LAB_008b3499;
      }
      break;
    case 0x6e2:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4872;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CIsAiTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6e4:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b48a5;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CCanCreateVassalsTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6e5:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b48d8;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b48ea;
        piVar5 = (int *)FUN_008b6f80();
        goto LAB_008b3499;
      }
      break;
    case 0x6e6:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b48f6;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CProvinceIdTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x6e7:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b4929;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b493b;
        piVar5 = (int *)FUN_008b6fc0();
        goto LAB_008b3499;
      }
      break;
    case 0x6e8:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b4947;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4959;
        piVar5 = (int *)FUN_008b7040();
        goto LAB_008b3499;
      }
      break;
    case 0x70a:
      piStack_2ec = (int *)0x28;
      iStack_2f0 = 0x8b46ea;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b46fc;
        piVar5 = (int *)FUN_008ca230();
        goto LAB_008b3499;
      }
      break;
    case 0x71d:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b479d;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b47af;
        piVar5 = (int *)FUN_008b6d10();
        goto LAB_008b3499;
      }
      break;
    case 0x73b:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4651;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNationalismTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x751:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4684;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CIsOverseasTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x752:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4965;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CActiveMissionTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x755:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b473b;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_00aae9af();
      piVar5 = (int *)0x0;
      if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
      piVar2[1] = 0x18d;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *piVar2 = (int)CAnyOwnedProvinceTrigger::vftable;
      goto LAB_008b3abf;
    case 0x75f:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b4b1d;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b4b2f;
        piVar5 = (int *)FUN_008b7a30();
        goto LAB_008b3499;
      }
    }
    goto LAB_008b3497;
  }
  if (param_2 < 0x8b7) {
    if (param_2 == 0x8b6) {
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b50ec;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b50fe;
        piVar5 = (int *)FUN_008b7a50();
        goto LAB_008b3499;
      }
    }
    else {
      switch(param_2) {
      case 0x798:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4bd9;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CAlwaysTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x799:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4cdd;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CFoWRemovedTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x79a:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4c7b;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CIsCapitalTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      default:
        goto switchD_008b3464_caseD_79;
      case 0x79d:
        piStack_2ec = (int *)0x38;
        iStack_2f0 = 0x8b4c5d;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4c6f;
          piVar5 = (int *)FUN_008b6bf0();
          goto LAB_008b3499;
        }
        break;
      case 0x79e:
        piStack_2ec = (int *)0x38;
        iStack_2f0 = 0x8b4c3f;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4c51;
          piVar5 = (int *)FUN_008b6b90();
          goto LAB_008b3499;
        }
        break;
      case 0x7a3:
        piStack_2ec = (int *)0x1c;
        iStack_2f0 = 0x8b4cae;
        ExceptionList = &local_14;
        piVar2 = (int *)FUN_00aae9af();
        piVar5 = (int *)0x0;
        if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
        piVar2[1] = 0x18d;
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        *piVar2 = (int)CAnyCoreTrigger::vftable;
        goto LAB_008b3abf;
      case 0x7bd:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4c0c;
        ExceptionList = &local_14;
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 != (int *)0x0) {
          piVar5[1] = 0x18d;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          *(undefined2 *)(piVar5 + 6) = 0;
          *piVar5 = (int)CElectionTrigger::vftable;
          goto LAB_008b3499;
        }
        break;
      case 0x865:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4d2e;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4d40;
          piVar5 = (int *)FUN_008b7400();
          goto LAB_008b3499;
        }
        break;
      case 0x866:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b50ce;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b50e0;
          piVar5 = (int *)FUN_008b7860();
          goto LAB_008b3499;
        }
        break;
      case 0x867:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4d4c;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4d5e;
          piVar5 = (int *)FUN_008b7440();
          goto LAB_008b3499;
        }
        break;
      case 0x868:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4d6a;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4d7c;
          piVar5 = (int *)FUN_008b7460();
          goto LAB_008b3499;
        }
        break;
      case 0x869:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4da6;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4db8;
          piVar5 = (int *)FUN_008b74e0();
          goto LAB_008b3499;
        }
        break;
      case 0x86a:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4fe0;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4ff2;
          piVar5 = (int *)FUN_008b7710();
          goto LAB_008b3499;
        }
        break;
      case 0x86c:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4de2;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4df4;
          piVar5 = (int *)FUN_008b7500();
          goto LAB_008b3499;
        }
        break;
      case 0x86d:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4e78;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4e8a;
          piVar5 = (int *)FUN_008b75f0();
          goto LAB_008b3499;
        }
        break;
      case 0x86e:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4e96;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4ea8;
          piVar5 = (int *)FUN_008b7620();
          goto LAB_008b3499;
        }
        break;
      case 0x86f:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4e00;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4e12;
          piVar5 = (int *)FUN_008b7520();
          goto LAB_008b3499;
        }
        break;
      case 0x870:
        piStack_2ec = (int *)0x24;
        iStack_2f0 = 0x8b4dc4;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4dd6;
          piVar5 = (int *)FUN_008ed0b0();
          goto LAB_008b3499;
        }
        break;
      case 0x871:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4f2c;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4f3e;
          piVar5 = (int *)FUN_008b7640();
          goto LAB_008b3499;
        }
        break;
      case 0x872:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4f4a;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4f5c;
          piVar5 = (int *)FUN_008b7670();
          goto LAB_008b3499;
        }
        break;
      case 0x873:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4f68;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4f7a;
          piVar5 = (int *)FUN_008b76a0();
          goto LAB_008b3499;
        }
        break;
      case 0x874:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4e5a;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4e6c;
          piVar5 = (int *)FUN_008b75c0();
          goto LAB_008b3499;
        }
        break;
      case 0x875:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4e3c;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4e4e;
          piVar5 = (int *)FUN_008b7590();
          goto LAB_008b3499;
        }
        break;
      case 0x876:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4e1e;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4e30;
          piVar5 = (int *)FUN_008b7560();
          goto LAB_008b3499;
        }
        break;
      case 0x877:
        piStack_2ec = (int *)0x1c;
        iStack_2f0 = 0x8b4d88;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4d9a;
          piVar5 = (int *)FUN_008b74c0();
          goto LAB_008b3a01;
        }
        goto LAB_008b39ff;
      case 0x87a:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b4ffe;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x0;
          iStack_2f0 = 0x8b5014;
          piVar5 = (int *)FUN_008b31d0();
          goto LAB_008b3499;
        }
        break;
      case 0x87b:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b5020;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x1;
          iStack_2f0 = 0x8b5037;
          piVar5 = (int *)FUN_008b31d0();
          goto LAB_008b3499;
        }
        break;
      case 0x87c:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b5043;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x2;
          iStack_2f0 = 0x8b505a;
          piVar5 = (int *)FUN_008b31d0();
          goto LAB_008b3499;
        }
        break;
      case 0x87d:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b5066;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x0;
          iStack_2f0 = 0x8b507c;
          piVar5 = (int *)FUN_008b31d0();
          goto LAB_008b3499;
        }
        break;
      case 0x87e:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b5088;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x1;
          iStack_2f0 = 0x8b509f;
          piVar5 = (int *)FUN_008b31d0();
          goto LAB_008b3499;
        }
        break;
      case 0x87f:
        piStack_2ec = (int *)0x30;
        iStack_2f0 = 0x8b50ab;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x2;
          iStack_2f0 = 0x8b50c2;
          piVar5 = (int *)FUN_008b31d0();
          goto LAB_008b3499;
        }
        break;
      case 0x880:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4eb4;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4ec6;
          piVar5 = (int *)FUN_008f1240();
          goto LAB_008b3499;
        }
        break;
      case 0x881:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4ed2;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4ee4;
          piVar5 = (int *)FUN_008f1840();
          goto LAB_008b3499;
        }
        break;
      case 0x882:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4ef0;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4f02;
          piVar5 = (int *)FUN_008f1e30();
          goto LAB_008b3499;
        }
        break;
      case 0x883:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4f0e;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4f20;
          piVar5 = (int *)FUN_008f2110();
          goto LAB_008b3499;
        }
        break;
      case 0x884:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4f86;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4f98;
          piVar5 = (int *)FUN_008b76d0();
          goto LAB_008b3499;
        }
        break;
      case 0x886:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4fa4;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4fb6;
          piVar5 = (int *)FUN_008b76f0();
          goto LAB_008b3499;
        }
        break;
      case 0x887:
        piStack_2ec = (int *)0x28;
        iStack_2f0 = 0x8b4fc2;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4fd4;
          piVar5 = (int *)FUN_008f44e0();
          goto LAB_008b3499;
        }
        break;
      case 0x891:
switchD_008b3464_caseD_d9:
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b4d10;
        ExceptionList = &local_14;
        iVar3 = FUN_00aae9af();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x8b4d22;
          piVar5 = (int *)FUN_008b71a0();
          goto LAB_008b3499;
        }
      }
    }
    goto LAB_008b3497;
  }
  if (param_2 < 0x9bf) {
    if (param_2 == 0x9be) {
      piStack_2ec = (int *)0x2c;
      iStack_2f0 = 0x8b5689;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b569b;
        piVar5 = (int *)FUN_009035e0();
        goto LAB_008b3a01;
      }
      goto LAB_008b39ff;
    }
    switch(param_2) {
    case 0x8d2:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5401;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5413;
        piVar5 = (int *)FUN_008b7970();
        goto LAB_008b3499;
      }
      break;
    case 0x8d3:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b541f;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5431;
        piVar5 = (int *)FUN_008b7a70();
        goto LAB_008b3499;
      }
      break;
    default:
      goto switchD_008b3464_caseD_79;
    case 0x8d8:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b5204;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      local_2dc = (int *)0x0;
      if (piVar5 == (int *)0x0) goto LAB_008b3a67;
      piVar5[1] = 0x18d;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *piVar5 = (int)CAnySphereMemberTrigger::vftable;
LAB_008b3a5d:
      *(undefined2 *)(piVar5 + 6) = 0;
      local_2dc = piVar5;
      goto LAB_008b3a67;
    case 0x8db:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b543d;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b544f;
        piVar5 = (int *)FUN_008b7ab0();
        goto LAB_008b3499;
      }
      break;
    case 0x8f6:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b53e3;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b53f5;
        piVar5 = (int *)FUN_008b7930();
        goto LAB_008b3499;
      }
      break;
    case 0x8fc:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b545b;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b546d;
        piVar5 = (int *)FUN_008f7170();
        goto LAB_008b3499;
      }
      break;
    case 0x905:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5479;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b548b;
        piVar5 = (int *)FUN_008b7b80();
        goto LAB_008b3499;
      }
      break;
    case 0x91b:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5497;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b54a9;
        piVar5 = (int *)FUN_008b7ba0();
        goto LAB_008b3499;
      }
      break;
    case 0x91e:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b5323;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5335;
        piVar5 = (int *)FUN_008b7000();
        goto LAB_008b3499;
      }
      break;
    case 0x920:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b54b5;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b54c7;
        piVar5 = (int *)FUN_008b7bc0();
        goto LAB_008b3499;
      }
      break;
    case 0x926:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b54d3;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b54e5;
        piVar5 = (int *)FUN_008fbfa0();
        goto LAB_008b3499;
      }
      break;
    case 0x927:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b54f1;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5503;
        piVar5 = (int *)FUN_008f71f0();
        goto LAB_008b3499;
      }
      break;
    case 0x92e:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b5233;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5245;
        piVar5 = (int *)FUN_008b6c60();
        goto LAB_008b3499;
      }
      break;
    case 0x92f:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5251;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CConstructingCasusBelliDiscoveredTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x930:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5284;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CConstructingCasusBelliProgressTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x932:
      piStack_2ec = (int *)0x48;
      iStack_2f0 = 0x8b550f;
      ExceptionList = &local_14;
      piStack_2ec = (int *)FUN_00aae9af();
      local_c = 1;
      if (piStack_2ec != (int *)0x0) {
        iStack_2f0 = 0x8b5531;
        piVar5 = (int *)FUN_009023f0();
        local_c = 0xffffffff;
        goto LAB_008b3a01;
      }
      goto LAB_008b4ae6;
    case 0x939:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b52f0;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CConstructingCasusBelliTypeTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x93b:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b535f;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CIsSubstateTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x93c:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b5341;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5353;
        piVar5 = (int *)FUN_008b7080();
        goto LAB_008b3499;
      }
      break;
    case 0x93e:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b516c;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfVassalsNoSubstatesTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x93f:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5139;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CNumOfSubstatesTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x940:
      piStack_2ec = (int *)0x1c;
      iStack_2f0 = 0x8b51d5;
      ExceptionList = &local_14;
      piVar2 = (int *)FUN_00aae9af();
      piVar5 = (int *)0x0;
      if (piVar2 == (int *)0x0) goto LAB_008b3ac5;
      piVar2[1] = 0x18d;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[4] = 0;
      *piVar2 = (int)CAnySubstateTrigger::vftable;
      goto LAB_008b3abf;
    case 0x962:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5548;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b555a;
        piVar5 = (int *)FUN_008b7c40();
        goto LAB_008b3499;
      }
      break;
    case 0x963:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5566;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5578;
        piVar5 = (int *)FUN_008b7c60();
        goto LAB_008b3499;
      }
      break;
    case 0x981:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b55a2;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x0;
        iStack_2f0 = 0x8b55b1;
        local_2dc = (int *)FUN_00902a10();
        goto LAB_008b3a67;
      }
      goto LAB_008b55ba;
    case 0x982:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b55cc;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x1;
        iStack_2f0 = 0x8b55e0;
        piVar5 = (int *)FUN_00902a10();
        goto LAB_008b3a01;
      }
      goto LAB_008b39ff;
    case 0x987:
      piStack_2ec = (int *)0x3c;
      iStack_2f0 = 0x8b55ec;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b55fa;
        FUN_00902e60();
      }
      piStack_2ec = (int *)0x8b5610;
      FUN_0068f390();
      piStack_2ec = (int *)0x8b5622;
      FUN_009885d0();
      piStack_2ec = (int *)0xffffffff;
      local_c = 2;
      iStack_2f0 = 0;
      iStack_2f8 = 0x8b563f;
      pcStack_2f4 = local_2b0;
      FUN_00408ed0();
      goto LAB_008b604f;
    case 0x98d:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b52ba;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CCivilizationProgressTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x99a:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b53c5;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b53d7;
        piVar5 = (int *)FUN_008b7880();
        goto LAB_008b3499;
      }
      break;
    case 0x99d:
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b5584;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5596;
        piVar5 = (int *)FUN_00902760();
        goto LAB_008b3a01;
      }
      goto LAB_008b39ff;
    case 0x9a0:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b519f;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        piVar5[7] = 0;
        *piVar5 = (int)CBrigadesCompareTrigger::vftable;
        goto LAB_008b3499;
      }
      break;
    case 0x9a3:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b564d;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b565f;
        piVar5 = (int *)FUN_008b7c80();
        goto LAB_008b3499;
      }
      break;
    case 0x9a4:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b566b;
      ExceptionList = &local_14;
      iVar3 = FUN_00aae9af();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b567d;
        piVar5 = (int *)FUN_008b7ca0();
        goto LAB_008b3499;
      }
      break;
    case 0x9b0:
      piStack_2ec = (int *)0x20;
      iStack_2f0 = 0x8b5392;
      ExceptionList = &local_14;
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 != (int *)0x0) {
        piVar5[1] = 0x18d;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        *(undefined2 *)(piVar5 + 6) = 0;
        *piVar5 = (int)CGreatWarsEnabledTrigger::vftable;
        goto LAB_008b3499;
      }
    }
    goto LAB_008b3497;
  }
  switch(param_2) {
  case 0x9bf:
    piStack_2ec = (int *)0x2c;
    iStack_2f0 = 0x8b59dd;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b59ef;
      piVar5 = (int *)FUN_009037c0();
      goto LAB_008b3a01;
    }
    goto LAB_008b39ff;
  case 0x9c0:
    piStack_2ec = (int *)0x44;
    iStack_2f0 = 0x8b59fb;
    ExceptionList = &local_14;
    piStack_2ec = (int *)FUN_00aae9af();
    local_c = 3;
    if (piStack_2ec != (int *)0x0) {
      iStack_2f0 = 0x8b5a19;
      local_2dc = (int *)FUN_009039a0();
      local_c = 0xffffffff;
      goto LAB_008b3a67;
    }
    goto LAB_008b5a2d;
  case 0x9c1:
    piStack_2ec = (int *)0x44;
    iStack_2f0 = 0x8b5a4a;
    ExceptionList = &local_14;
    piStack_2ec = (int *)FUN_00aae9af();
    local_c = 4;
    if (piStack_2ec != (int *)0x0) {
      iStack_2f0 = 0x8b5a6c;
      piVar5 = (int *)FUN_00903cc0();
      local_c = 0xffffffff;
      goto LAB_008b3a01;
    }
    goto LAB_008b4ae6;
  case 0x9c2:
    piStack_2ec = (int *)0x30;
    iStack_2f0 = 0x8b5a83;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5a95;
      local_2dc = (int *)FUN_00903fe0();
      goto LAB_008b3a67;
    }
    goto LAB_008b55ba;
  case 0x9c3:
    piStack_2ec = (int *)0x44;
    iStack_2f0 = 0x8b5aa5;
    ExceptionList = &local_14;
    piStack_2ec = (int *)FUN_00aae9af();
    local_c = 5;
    if (piStack_2ec != (int *)0x0) {
      iStack_2f0 = 0x8b5ac7;
      piVar5 = (int *)FUN_00904350();
      local_c = 0xffffffff;
      goto LAB_008b3a01;
    }
    goto LAB_008b4ae6;
  case 0x9c4:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5b1e;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5b30;
      local_2dc = (int *)FUN_00904b70();
      goto LAB_008b3a67;
    }
    goto LAB_008b55ba;
  case 0x9c5:
    piStack_2ec = (int *)0x2c;
    iStack_2f0 = 0x8b5b40;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5b52;
      piVar5 = (int *)FUN_00904d40();
      goto LAB_008b3a01;
    }
    goto LAB_008b39ff;
  case 0x9c6:
    piStack_2ec = (int *)0x40;
    iStack_2f0 = 0x8b5b5e;
    ExceptionList = &local_14;
    piStack_2ec = (int *)FUN_00aae9af();
    local_c = 6;
    if (piStack_2ec != (int *)0x0) {
      iStack_2f0 = 0x8b5b80;
      local_2dc = (int *)FUN_00905060();
      local_c = 0xffffffff;
      goto LAB_008b3a67;
    }
LAB_008b5a2d:
    local_c = 0xffffffff;
    local_2dc = (int *)0x0;
    goto LAB_008b3a67;
  case 0x9c7:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5b9b;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5bad;
      piVar5 = (int *)FUN_009052f0();
      goto LAB_008b3a01;
    }
    goto LAB_008b39ff;
  case 0x9c8:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5bb9;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5bcb;
      local_2dc = (int *)FUN_009054f0();
      goto LAB_008b3a67;
    }
    goto LAB_008b55ba;
  case 0x9c9:
    piStack_2ec = (int *)0x44;
    iStack_2f0 = 0x8b5bdb;
    ExceptionList = &local_14;
    piStack_2ec = (int *)FUN_00aae9af();
    local_c = 7;
    if (piStack_2ec != (int *)0x0) {
      iStack_2f0 = 0x8b5bfd;
      piVar5 = (int *)FUN_00905700();
      local_c = 0xffffffff;
      goto LAB_008b3a01;
    }
LAB_008b4ae6:
    piVar5 = (int *)0x0;
    local_c = 0xffffffff;
    goto LAB_008b3a01;
  default:
switchD_008b3464_caseD_79:
    piStack_2ec = (int *)0x8b5c5c;
    ExceptionList = &local_14;
    FUN_009885d0();
    local_c = 8;
    piStack_2ec = (int *)0x8b5c6c;
    FUN_00576f80();
    iStack_2f0 = 0x8b5c77;
    piStack_2ec = (int *)local_2cc;
    iVar3 = FUN_0057b0a0();
    if (iVar3 == 0) {
      piStack_2ec = (int *)local_2cc;
      iStack_2f0 = 0x8b5ce4;
      piVar5 = (int *)FUN_00973bd0();
      if (piVar5 != (int *)0x0) {
        piStack_2ec = (int *)0x8b5cf3;
        cVar1 = (**(code **)(*piVar5 + 0x20))();
        if (cVar1 != '\0') {
          piStack_2ec = (int *)0x30;
          iStack_2f0 = 0x8b5cfe;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_008b5c95;
          iStack_2f0 = 0x8b5d0b;
          piStack_2ec = piVar5;
          piVar5 = (int *)FUN_008c5620();
          goto LAB_008b5c97;
        }
      }
      piStack_2ec = (int *)DAT_01258a48;
      iStack_2f0 = 0x8b5d1d;
      piVar5 = (int *)FUN_00975bf0();
      if (piVar5 != (int *)0x0) {
        piStack_2ec = (int *)0x8b5d2c;
        cVar1 = (**(code **)(*piVar5 + 0x18))();
        if (cVar1 != '\0') {
          piStack_2ec = (int *)0x28;
          iStack_2f0 = 0x8b5d37;
          iVar3 = FUN_00aae9af();
          local_c._0_1_ = 9;
          if (iVar3 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            pcStack_2f4 = (undefined1 *)0x8b5d51;
            iStack_2f0 = iVar3;
            piStack_2ec = piVar5;
            piVar5 = (int *)FUN_008c49e0();
          }
          local_c = CONCAT31(local_c._1_3_,8);
          piStack_2ec = (int *)0x8b5d71;
          FUN_0068f390();
          iVar3 = *piVar5;
          puVar6 = (undefined4 *)(param_1 + 0x228);
          puVar7 = auStack_3ec;
          for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          (**(code **)(iVar3 + 0x24))();
          goto LAB_008b604f;
        }
      }
      piStack_2ec = (int *)DAT_01258a48;
      iStack_2f0 = 0x8b5dab;
      piVar5 = (int *)FUN_00975bd0();
      if (piVar5 != (int *)0x0) {
        piStack_2ec = (int *)0x8b5dba;
        cVar1 = (**(code **)(*piVar5 + 0x34))();
        if (cVar1 != '\0') {
          piStack_2ec = (int *)0x30;
          iStack_2f0 = 0x8b5dc5;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_008b5c95;
          iStack_2f0 = 0x8b5dd6;
          piStack_2ec = piVar5;
          piVar5 = (int *)FUN_008fc810();
          goto LAB_008b5c97;
        }
      }
      if (DAT_0131bb34 == 0) {
        piStack_2ec = (int *)0x188;
        iStack_2f0 = 0x8b5ded;
        iVar3 = FUN_00aae9af();
        local_c._0_1_ = 10;
        if (iVar3 == 0) {
          piStack_2ec = (int *)0x0;
        }
        else {
          piStack_2ec = (int *)0x8b5e07;
          piStack_2ec = (int *)FUN_0041a160();
        }
        local_c = CONCAT31(local_c._1_3_,8);
        iStack_2f0 = 0x8b5e19;
        FUN_00423700();
      }
      piStack_2ec = (int *)DAT_0131bb34;
      iStack_2f0 = 0x8b5e29;
      piVar5 = (int *)FUN_0096dc20();
      if (piVar5 != (int *)0x0) {
        piStack_2ec = (int *)0x8b5e38;
        cVar1 = (**(code **)(*piVar5 + 0x18))();
        if (cVar1 != '\0') {
          piStack_2ec = (int *)0x30;
          iStack_2f0 = 0x8b5e43;
          iVar3 = FUN_00aae9af();
          if (iVar3 == 0) goto LAB_008b5c95;
          iStack_2f0 = 0x8b5e54;
          piStack_2ec = piVar5;
          piVar5 = (int *)FUN_00901980();
          goto LAB_008b5c97;
        }
      }
      if (DAT_0125870c != 0) {
        piStack_2ec = (int *)DAT_0125870c;
        iStack_2f0 = 0x8b5e6c;
        iVar3 = FUN_0049da40();
        if (iVar3 != 0) {
          piStack_2ec = (int *)0x20;
          iStack_2f0 = 0x8b5e79;
          iVar4 = FUN_00aae9af();
          if (iVar4 == 0) {
            piVar5 = (int *)0x0;
          }
          else {
            iStack_2f0 = 0x8b5e86;
            piStack_2ec = (int *)iVar3;
            piVar5 = (int *)FUN_008c5d70();
          }
          piStack_2ec = (int *)0x8b5e9e;
          FUN_0068f390();
          piStack_2ec = (int *)param_1;
          iStack_2f0 = 0x8b5ead;
          (**(code **)(*piVar5 + 0xc))();
          goto LAB_008b604f;
        }
      }
      piStack_2ec = (int *)local_2cc;
      iStack_2f0 = 0x8b5ec1;
      iVar3 = FUN_00973bd0();
      if (iVar3 != 0) {
        piStack_2ec = (int *)0x8b5ecc;
        cVar1 = FUN_005613f0();
        if (cVar1 != '\0') {
          piStack_2ec = (int *)0x30;
          iStack_2f0 = 0x8b5ed7;
          iVar4 = FUN_00aae9af();
          if (iVar4 == 0) goto LAB_008b5c95;
          iStack_2f0 = 0x8b5ee8;
          piStack_2ec = (int *)iVar3;
          piVar5 = (int *)FUN_008fc340();
          goto LAB_008b5c97;
        }
      }
      piStack_2ec = (int *)auStack_128;
      iStack_2f0 = 0x8b5efd;
      FUN_008a8e70();
      piStack_2ec = (int *)0x0;
      iStack_2f0 = 0x8b5f07;
      FUN_008a8650();
      piStack_2ec = (int *)0x0;
      iStack_2f0 = 0x8b5f14;
      FUN_008a8650();
      piStack_2ec = (int *)auStack_128;
      iStack_2f0 = 0x8b5f25;
      FUN_00876240();
      if (cStack_25b == '\0') {
        piStack_2ec = (int *)0x20;
        iStack_2f0 = 0x8b5f35;
        iVar3 = FUN_00aae9af();
        local_c._0_1_ = 0xb;
        if (iVar3 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          puVar6 = (undefined4 *)(param_1 + 0x20);
          puVar7 = auStack_3ec;
          for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          piVar5 = (int *)FUN_008b93e0(iVar3);
        }
        local_c = CONCAT31(local_c._1_3_,8);
        piStack_2ec = (int *)0x8b5f80;
        FUN_0068f390();
        piStack_2ec = (int *)param_1;
        iStack_2f0 = 0x8b5f8f;
        (**(code **)(*piVar5 + 0xc))();
      }
      else {
        piStack_2ec = (int *)0x8b5fa2;
        FUN_009885d0();
        piStack_2ec = (int *)0x10004;
        iStack_2f0 = 0x1e9;
        local_c._0_1_ = 0xc;
        iStack_2f8 = 0x8b5fc3;
        pcStack_2f4 = auStack_294;
        FUN_004015b0();
        local_c._0_1_ = 0xd;
        iStack_300 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        piStack_2ec = *(int **)(iStack_300 + 8);
        pcStack_2f4 = " line : ";
        puStack_2fc = &DAT_00df12c8;
        uStack_308 = 0x8b5ffc;
        iStack_304 = param_1 + 0x24;
        iStack_2f8 = iStack_300;
        iStack_2f0 = iStack_300;
        uStack_308 = FUN_00987d20();
        uStack_30c = 0x8b6002;
        iStack_300 = FUN_00418e30();
        iStack_304 = 0x8b600b;
        iStack_304 = FUN_00418e30();
        uStack_308 = 0x8b6013;
        iStack_2f8 = FUN_00989050();
        puStack_2fc = (undefined *)0x8b601c;
        iStack_2f0 = FUN_00418e30();
        pcStack_2f4 = (undefined1 *)0x8b6025;
        piStack_2ec = (int *)FUN_00455470();
        iStack_2f0 = 0x8b602b;
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0xc);
        piStack_2ec = (int *)0x8b6042;
        FUN_00401650();
        piStack_2ec = (int *)0x8b604b;
        FUN_00408ad0();
      }
    }
    else {
      piStack_2ec = (int *)0x24;
      iStack_2f0 = 0x8b5c86;
      iVar4 = FUN_00aae9af();
      if (iVar4 == 0) {
LAB_008b5c95:
        piVar5 = (int *)0x0;
      }
      else {
        iStack_2f0 = 0x8b5c93;
        piStack_2ec = (int *)iVar3;
        piVar5 = (int *)FUN_008c5c00();
      }
LAB_008b5c97:
      piStack_2ec = (int *)0x8b5cab;
      FUN_0068f390();
      iVar3 = *piVar5;
      puVar6 = (undefined4 *)(param_1 + 0x228);
      puVar7 = auStack_3ec;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      (**(code **)(iVar3 + 0x24))();
    }
LAB_008b604f:
    piStack_2ec = (int *)0x8b6054;
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  case 0x9da:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b58cf;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b58e1;
      piVar5 = (int *)FUN_008b7cc0();
      goto LAB_008b3499;
    }
    break;
  case 0x9db:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b58ed;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b58ff;
      piVar5 = (int *)FUN_008b7ce0();
      goto LAB_008b3499;
    }
    break;
  case 0x9dd:
    piStack_2ec = (int *)0x54;
    iStack_2f0 = 0x8b5c14;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5c26;
      piVar5 = (int *)FUN_008b7de0();
      goto LAB_008b3499;
    }
    break;
  case 0x9e3:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5c32;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5c44;
      piVar5 = (int *)FUN_008b7e20();
      goto LAB_008b3499;
    }
    break;
  case 0x9e8:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b590b;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b591d;
      piVar5 = (int *)FUN_008b7d00();
      goto LAB_008b3499;
    }
    break;
  case 0x9e9:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5929;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b593b;
      piVar5 = (int *)FUN_008b7d20();
      goto LAB_008b3499;
    }
    break;
  case 0xa27:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5947;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5959;
      piVar5 = (int *)FUN_008b7d40();
      goto LAB_008b3499;
    }
    break;
  case 0xa28:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5965;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5977;
      piVar5 = (int *)FUN_008b7d60();
      goto LAB_008b3499;
    }
    break;
  case 0xa29:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5983;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5995;
      piVar5 = (int *)FUN_008b7d80();
      goto LAB_008b3499;
    }
    break;
  case 0xa2a:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b59a1;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b59b3;
      piVar5 = (int *)FUN_008b7da0();
      goto LAB_008b3499;
    }
    break;
  case 0xa2d:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b59bf;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b59d1;
      piVar5 = (int *)FUN_008b7dc0();
      goto LAB_008b3499;
    }
    break;
  case 0xa33:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b58b1;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b58c3;
      piVar5 = (int *)FUN_008b74a0();
      goto LAB_008b3499;
    }
    break;
  case 0xa3b:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b56c5;
    ExceptionList = &local_14;
    piVar5 = (int *)FUN_00aae9af();
    if (piVar5 != (int *)0x0) {
      piVar5[1] = 0x18d;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *(undefined2 *)(piVar5 + 6) = 0;
      *piVar5 = (int)CHasCulturalSphereTrigger::vftable;
      goto LAB_008b3499;
    }
    break;
  case 0xa40:
    piStack_2ec = (int *)0x30;
    iStack_2f0 = 0x8b5ade;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5af0;
      local_2dc = (int *)FUN_00904650();
      goto LAB_008b3a67;
    }
LAB_008b55ba:
    local_2dc = (int *)0x0;
LAB_008b3a67:
    piStack_2ec = (int *)0x8b3a73;
    FUN_0068f390();
    piStack_2ec = (int *)param_1;
    iStack_2f0 = 0x8b3a82;
    (**(code **)(*local_2dc + 0xc))();
    ExceptionList = pvStack_18;
    return;
  case 0xa41:
    piStack_2ec = (int *)0x30;
    iStack_2f0 = 0x8b5b00;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5b12;
      piVar5 = (int *)FUN_00904900();
      goto LAB_008b3a01;
    }
    goto LAB_008b39ff;
  case 0xa55:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b56f8;
    ExceptionList = &local_14;
    piVar5 = (int *)FUN_00aae9af();
    if (piVar5 != (int *)0x0) {
      piVar5[1] = 0x18d;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *(undefined2 *)(piVar5 + 6) = 0;
      *piVar5 = (int)CWorldWarsEnabledTrigger::vftable;
      goto LAB_008b3499;
    }
    break;
  case 0xa5c:
    piStack_2ec = (int *)0x1c;
    iStack_2f0 = 0x8b572b;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b573d;
      piVar5 = (int *)FUN_008b70c0();
      goto LAB_008b3a01;
    }
    goto LAB_008b39ff;
  case 0xa5d:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5749;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b575b;
      piVar5 = (int *)FUN_008b70e0();
      goto LAB_008b3499;
    }
    break;
  case 0xa5e:
    piStack_2ec = (int *)0x20;
    iStack_2f0 = 0x8b5767;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5779;
      piVar5 = (int *)FUN_008b7100();
      goto LAB_008b3499;
    }
    break;
  case 0xa67:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b57fd;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b580f;
      piVar5 = (int *)FUN_008b72e0();
      goto LAB_008b3499;
    }
    break;
  case 0xa68:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5839;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b584b;
      piVar5 = (int *)FUN_008b7340();
      goto LAB_008b3499;
    }
    break;
  case 0xa69:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b581b;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b582d;
      piVar5 = (int *)FUN_008b7310();
      goto LAB_008b3499;
    }
    break;
  case 0xa6e:
    piStack_2ec = (int *)0x2c;
    iStack_2f0 = 0x8b5785;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5797;
      piVar5 = (int *)FUN_008b71c0();
      goto LAB_008b3a01;
    }
LAB_008b39ff:
    piVar5 = (int *)0x0;
LAB_008b3a01:
    piStack_2ec = (int *)0x8b3a11;
    FUN_0068f390();
    piStack_2ec = (int *)param_1;
    iStack_2f0 = 0x8b3a20;
    (**(code **)(*piVar5 + 0xc))();
    ExceptionList = pvStack_18;
    return;
  case 0xa6f:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b57a3;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b57b5;
      piVar5 = (int *)FUN_008b7220();
      goto LAB_008b3499;
    }
    break;
  case 0xa70:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b57c1;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b57d3;
      piVar5 = (int *)FUN_008b7250();
      goto LAB_008b3499;
    }
    break;
  case 0xa71:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b57df;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b57f1;
      piVar5 = (int *)FUN_008b7280();
      goto LAB_008b3499;
    }
    break;
  case 0xa73:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5857;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5869;
      piVar5 = (int *)FUN_008b7370();
      goto LAB_008b3499;
    }
    break;
  case 0xa74:
switchD_008b3742_caseD_257:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5875;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b5887;
      piVar5 = (int *)FUN_008b73a0();
      goto LAB_008b3499;
    }
    break;
  case 0xa75:
    piStack_2ec = (int *)0x28;
    iStack_2f0 = 0x8b5893;
    ExceptionList = &local_14;
    iVar3 = FUN_00aae9af();
    if (iVar3 != 0) {
      piStack_2ec = (int *)0x8b58a5;
      piVar5 = (int *)FUN_008b73d0();
      goto LAB_008b3499;
    }
  }
LAB_008b3497:
  piVar5 = (int *)0x0;
LAB_008b3499:
  piStack_2ec = (int *)0x8b34ab;
  FUN_0068f390();
  iVar3 = *piVar5;
  puVar6 = (undefined4 *)(param_1 + 0x228);
  puVar7 = auStack_3ec;
  for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  (**(code **)(iVar3 + 0x24))();
  ExceptionList = pvStack_118;
  return;
}

