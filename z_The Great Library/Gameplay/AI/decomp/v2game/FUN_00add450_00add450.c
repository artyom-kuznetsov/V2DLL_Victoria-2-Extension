// FUN_00add450 @ 00add450 body=[[00add450, 00add7c2]]


void FUN_00add450(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 uVar12;
  uint uStack_54;
  int local_50;
  float *pfStack_4c;
  
  uVar1 = in_ECX[0xd];
  iVar2 = in_ECX[4];
  iVar5 = 0;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = (**(code **)(**(int **)(in_ECX[0xc] + uVar6 * 4) + 4))();
      if (iVar4 == 5) {
        if (iVar5 == 0) {
          if ((uVar6 != 0xffffffff) &&
             (piVar3 = *(int **)(in_ECX[0xc] + uVar6 * 4), piVar3 != (int *)0x0)) {
            local_50 = (**(code **)(*piVar3 + 0x10))();
            goto LAB_00add49d;
          }
          break;
        }
        iVar5 = iVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  local_50 = 0;
LAB_00add49d:
  uVar1 = in_ECX[0xd];
  iVar5 = 0;
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = (**(code **)(**(int **)(in_ECX[0xc] + uVar6 * 4) + 4))();
      if (iVar4 == 0) {
        if (iVar5 == 0) {
          if ((uVar6 != 0xffffffff) &&
             (piVar3 = *(int **)(in_ECX[0xc] + uVar6 * 4), piVar3 != (int *)0x0)) {
            pfStack_4c = (float *)(**(code **)(*piVar3 + 0x10))();
            goto LAB_00add4cf;
          }
          break;
        }
        iVar5 = iVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  pfStack_4c = (float *)0x0;
LAB_00add4cf:
  uVar1 = in_ECX[0xd];
  uVar6 = 0;
  if (uVar1 != 0) {
    iVar5 = 0;
    do {
      iVar4 = (**(code **)(**(int **)(in_ECX[0xc] + uVar6 * 4) + 4))();
      if (iVar4 == 1) {
        if (iVar5 == 0) {
          if ((uVar6 != 0xffffffff) &&
             (piVar3 = *(int **)(in_ECX[0xc] + uVar6 * 4), piVar3 != (int *)0x0)) {
            uStack_54 = (**(code **)(*piVar3 + 0x10))();
            goto LAB_00add508;
          }
          break;
        }
        iVar5 = iVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  uStack_54 = 0;
LAB_00add508:
  pcVar11 = "- Mesh";
  FUN_00b15ef0();
  uVar12 = CONCAT44(pcVar11,in_ECX[6]);
  pcVar11 = "  + Num vertices             = %d";
  FUN_00b15ef0();
  FUN_00b15ef0("  + Num indices              = %d (%d triangles)",in_ECX[7],(uint)in_ECX[7] / 3,
               pcVar11,uVar12);
  FUN_00b15ef0("  + Num original vertices    = %d",in_ECX[5]);
  FUN_00b15ef0("  + Num submeshes            = %d",in_ECX[1]);
  FUN_00b15ef0("  + Num attrib layers        = %d",in_ECX[0xd]);
  FUN_00b15ef0("  + Num shared attrib layers = %d",in_ECX[9]);
  uVar1 = in_ECX[5];
  FUN_00b15ef0("   - Org Vertices (%d)",uVar1);
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b15ef0("     + %d",*(undefined4 *)(local_50 + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  iVar5 = in_ECX[6];
  FUN_00b15ef0("   - Positions / Normals (%d)",iVar5);
  if (iVar5 != 0) {
    pfVar7 = (float *)(uStack_54 + 4);
    iVar4 = (int)pfStack_4c - uStack_54;
    pfVar8 = pfStack_4c;
    pfStack_4c = (float *)iVar5;
    do {
      FUN_00b15ef0("     + Position: %f %f %f, Normal: %f %f %f",(double)*pfVar8,
                   (double)*(float *)(iVar4 + (int)pfVar7),(double)pfVar8[2],(double)pfVar7[-1],
                   (double)*pfVar7,(double)pfVar7[1]);
      pfVar7 = pfVar7 + 3;
      pfVar8 = pfVar8 + 3;
      pfStack_4c = (float *)((int)pfStack_4c + -1);
    } while (pfStack_4c != (float *)0x0);
  }
  uVar1 = in_ECX[1];
  uStack_54 = 0;
  if (uVar1 != 0) {
    do {
      piVar3 = *(int **)(*in_ECX + uStack_54 * 4);
      FUN_00b15ef0("   - SubMesh / Primitive #%d:",uStack_54);
      FUN_00b15ef0("     + Start vertex = %d",piVar3[4]);
      FUN_00b15ef0("     + Start index  = %d",piVar3[5]);
      FUN_00b15ef0("     + Num vertices = %d",piVar3[6]);
      uVar12 = CONCAT44((uint)piVar3[7] / 3,piVar3[7]);
      pcVar11 = "     + Num indices  = %d (%d triangles)";
      FUN_00b15ef0();
      FUN_00b15ef0("     + Num bones    = %d",piVar3[1],pcVar11,uVar12);
      FUN_00b15ef0("     + MaterialNr   = %d",piVar3[8]);
      FUN_00b15ef0("       - Triangle Indices:");
      uVar6 = piVar3[5];
      iVar5 = piVar3[4];
      if (uVar6 < piVar3[7] + uVar6) {
        piVar9 = (int *)(iVar2 + 4 + uVar6 * 4);
        iVar4 = (((piVar3[7] + uVar6) - uVar6) - 1) / 3 + 1;
        do {
          FUN_00b15ef0("         + (%d, %d, %d)",piVar9[-1] - iVar5,*piVar9 - iVar5);
          piVar9 = piVar9 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_00b15ef0();
      uVar6 = piVar3[1];
      if (uVar6 != 0) {
        uVar10 = 0;
        do {
          FUN_00b15ef0("         + NodeNr %d",*(undefined4 *)(*piVar3 + uVar10 * 4));
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
      }
      uStack_54 = uStack_54 + 1;
    } while (uStack_54 < uVar1);
  }
  return;
}

