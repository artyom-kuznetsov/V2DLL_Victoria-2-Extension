// FUN_00a82940 @ 00a82940 body=[[00a82940, 00a82b0d]]


void FUN_00a82940(void)

{
  uint in_EAX;
  uint uVar1;
  int unaff_ESI;
  float10 fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x28))(*(int **)(unaff_ESI + 0x180));
  if (in_EAX < uVar1) {
    piVar7 = *(int **)(unaff_ESI + 0x180);
    (**(code **)(*piVar7 + 0x2c))(piVar7);
    (**(code **)(*uStack_54 + 0xc))(uStack_54);
    uVar1 = (uint)(*(int *)(unaff_ESI + 0x14c) == 0);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x40))
              (*(int **)(unaff_ESI + 0x180),uVar1,uStack_58);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x84))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c));
    piVar6 = *(int **)(unaff_ESI + 0x180);
    (**(code **)(*piVar6 + 0x84))(piVar6,uVar1);
    fVar2 = (float10)(**(code **)(**(int **)(unaff_ESI + 0x180) + 0x3c))
                               (*(int **)(unaff_ESI + 0x180));
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x78))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),0,
               (double)((float)fVar2 + 1.0));
    dVar4 = (double)(float)piVar7;
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x6c))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),0,dVar4,
               0x3ff0000000000000,0);
    fVar5 = SUB84(dVar4,0);
    dVar4 = (double)(float)piVar6;
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x70))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),0,dVar4,
               0x3ff0000000000000,0);
    fVar3 = SUB84(dVar4,0);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x58))(*(int **)(unaff_ESI + 0x180),uVar1,1);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x6c))
              (*(int **)(unaff_ESI + 0x180),uVar1,DAT_00f092fc,(double)fVar5,0x3ff0000000000000,0);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x70))
              (*(int **)(unaff_ESI + 0x180),uVar1,DAT_00f092fc,(double)fVar3,0x3ff0000000000000,0);
    *(uint *)(unaff_ESI + 0x14c) = uVar1;
  }
  return;
}

