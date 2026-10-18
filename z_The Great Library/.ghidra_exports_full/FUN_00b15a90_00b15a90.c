// FUN_00b15a90 @ 00b15a90 body=[[00b15a90, 00b15b77]]


int * FUN_00b15a90(int *param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_c [12];
  
  uVar1 = in_ECX[1];
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*in_ECX + uVar9 * 4);
      iVar5 = (**(code **)(*piVar2 + 8))();
      if (iVar5 == 1) {
        puVar6 = (undefined4 *)FUN_00b1a0f0(auStack_c);
        piVar7 = param_1;
        do {
          iVar5 = *piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
        } while ((char)iVar5 != '\0');
        uVar8 = puVar6[1];
        if ((int)piVar7 - (int)((int)param_1 + 1) == uVar8) {
          piVar7 = (int *)*puVar6;
          piVar4 = param_1;
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)&DAT_00ded94d;
          }
          for (; 3 < uVar8; uVar8 = uVar8 - 4) {
            if (*piVar4 != *piVar7) goto LAB_00b15b40;
            piVar7 = piVar7 + 1;
            piVar4 = piVar4 + 1;
          }
          if ((uVar8 != 0) &&
             (((char)*piVar7 != (char)*piVar4 ||
              ((1 < uVar8 &&
               ((*(char *)((int)piVar7 + 1) != *(char *)((int)piVar4 + 1) ||
                ((2 < uVar8 && (*(char *)((int)piVar7 + 2) != *(char *)((int)piVar4 + 2)))))))))))
          goto LAB_00b15b40;
          bVar3 = true;
        }
        else {
LAB_00b15b40:
          bVar3 = false;
        }
        FUN_00b13650();
        if (bVar3) {
          return piVar2;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  return (int *)0x0;
}

