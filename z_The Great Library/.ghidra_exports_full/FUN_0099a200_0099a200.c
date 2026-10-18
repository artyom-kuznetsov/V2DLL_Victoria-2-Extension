// FUN_0099a200 @ 0099a200 body=[[0099a200, 0099a478]]


void FUN_0099a200(int *param_1,int *param_2)

{
  uint *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  char cVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  int local_54 [12];
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_10;
  int *local_c;
  char local_5;
  
  local_10 = in_ECX;
  do {
    if (param_2 == (int *)0x0) {
      return;
    }
    local_c = param_2;
    local_5 = (**(code **)(*param_2 + 0x3c))();
    if (param_2[0x37] == 0) {
LAB_0099a249:
      bVar4 = false;
    }
    else {
      cVar5 = (**(code **)(*param_2 + 0x158))();
      bVar4 = true;
      if (cVar5 == '\0') goto LAB_0099a249;
    }
    cVar5 = local_5;
    if ((local_5 != '\0') || (bVar4)) {
      piVar7 = param_1;
      piVar8 = local_54;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      local_24 = (float)param_2[0x21] + local_24;
      local_20 = (float)param_2[0x22] + local_20;
      local_1c = DAT_00f092dc;
      local_18 = DAT_00f092fc;
      piVar7 = local_54;
      piVar8 = param_2 + 0x25;
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if (cVar5 != '\0') {
        DAT_01258a70 = DAT_01258a70 + 1;
        (**(code **)(*param_2 + 0x20))();
        iVar6 = local_10;
        ppiVar2 = *(int ***)(local_10 + 0xfc);
        puVar1 = (uint *)(local_10 + 0xf8);
        if (&local_c < ppiVar2) {
          ppiVar3 = (int **)*puVar1;
          if (&local_c < ppiVar3) goto LAB_0099a330;
          if (ppiVar2 == *(int ***)(local_10 + 0x100)) {
            FUN_00a513f0();
          }
          iVar9 = local_10;
          if (*(undefined4 **)(iVar6 + 0xfc) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar6 + 0xfc) =
                 *(undefined4 *)(*puVar1 + ((int)&local_c - (int)ppiVar3 >> 2) * 4);
          }
        }
        else {
LAB_0099a330:
          if (ppiVar2 == *(int ***)(local_10 + 0x100)) {
            FUN_00a513f0();
          }
          iVar9 = iVar6;
          if (*(undefined4 **)(iVar6 + 0xfc) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar6 + 0xfc) = param_2;
          }
        }
        *(int *)(iVar6 + 0xfc) = *(int *)(iVar6 + 0xfc) + 4;
        ppiVar2 = *(int ***)(iVar9 + 0x54);
        if (&local_c < ppiVar2) {
          ppiVar3 = *(int ***)(iVar9 + 0x50);
          if (&local_c < ppiVar3) goto LAB_0099a385;
          if (ppiVar2 == *(int ***)(iVar9 + 0x58)) {
            FUN_00a513f0();
          }
          iVar6 = local_10;
          if (*(undefined4 **)(iVar9 + 0x54) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0x54) =
                 *(undefined4 *)(*(uint *)(iVar9 + 0x50) + ((int)&local_c - (int)ppiVar3 >> 2) * 4);
          }
        }
        else {
LAB_0099a385:
          if (ppiVar2 == *(int ***)(iVar9 + 0x58)) {
            FUN_00a513f0();
          }
          iVar6 = iVar9;
          if (*(undefined4 **)(iVar9 + 0x54) != (undefined4 *)0x0) {
            **(undefined4 **)(iVar9 + 0x54) = param_2;
          }
        }
        *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 4;
        fVar10 = (float10)(**(code **)(*param_2 + 0x50))
                                    (*(undefined4 *)(iVar6 + 0x38),*(undefined4 *)(iVar6 + 0x3c),
                                     &DAT_0131c918,(undefined4)DAT_0131c90c,DAT_0131c90c._4_4_,
                                     DAT_0131c914,&DAT_0131c90c,0);
        if ((fVar10 != (float10)0) ||
           (((char)param_2[10] != '\0' && (*(char *)(DAT_01258a80 + 0x11) == '\0')))) {
          ppiVar2 = *(int ***)(iVar6 + 0x44);
          if (&local_c < ppiVar2) {
            ppiVar3 = *(int ***)(iVar6 + 0x40);
            if (&local_c < ppiVar3) goto LAB_0099a42d;
            if (ppiVar2 == *(int ***)(iVar6 + 0x48)) {
              FUN_00a513f0();
            }
            if (*(undefined4 **)(iVar6 + 0x44) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar6 + 0x44) =
                   *(undefined4 *)
                    (*(uint *)(iVar6 + 0x40) + ((int)&local_c - (int)ppiVar3 >> 2) * 4);
            }
          }
          else {
LAB_0099a42d:
            if (ppiVar2 == *(int ***)(iVar6 + 0x48)) {
              FUN_00a513f0();
            }
            if (*(undefined4 **)(iVar6 + 0x44) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar6 + 0x44) = param_2;
            }
          }
          *(int *)(iVar6 + 0x44) = *(int *)(iVar6 + 0x44) + 4;
        }
      }
      if (bVar4) {
        FUN_0099a200(local_54,param_2[0x37]);
      }
    }
    param_2 = (int *)param_2[0x36];
  } while( true );
}

