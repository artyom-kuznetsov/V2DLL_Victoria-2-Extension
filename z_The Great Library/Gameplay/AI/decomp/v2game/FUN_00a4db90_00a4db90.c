// FUN_00a4db90 @ 00a4db90 body=[[00a4db90, 00a4dd5d]]


void FUN_00a4db90(void)

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
  
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x28))(*(int **)(unaff_ESI + 0xac));
  if (in_EAX < uVar1) {
    piVar7 = *(int **)(unaff_ESI + 0xac);
    (**(code **)(*piVar7 + 0x2c))(piVar7);
    (**(code **)(*uStack_54 + 0xc))(uStack_54);
    uVar1 = (uint)(*(int *)(unaff_ESI + 0x11c) == 0);
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x40))(*(int **)(unaff_ESI + 0xac),uVar1,uStack_58);
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x84))
              (*(int **)(unaff_ESI + 0xac),*(undefined4 *)(unaff_ESI + 0x11c));
    piVar6 = *(int **)(unaff_ESI + 0xac);
    (**(code **)(*piVar6 + 0x84))(piVar6,uVar1);
    fVar2 = (float10)(**(code **)(**(int **)(unaff_ESI + 0xac) + 0x3c))(*(int **)(unaff_ESI + 0xac))
    ;
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x78))
              (*(int **)(unaff_ESI + 0xac),*(undefined4 *)(unaff_ESI + 0x11c),0,
               (double)((float)fVar2 + 1.0));
    dVar4 = (double)(float)piVar7;
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x6c))
              (*(int **)(unaff_ESI + 0xac),*(undefined4 *)(unaff_ESI + 0x11c),0,dVar4,
               0x3ff0000000000000,0);
    fVar5 = SUB84(dVar4,0);
    dVar4 = (double)(float)piVar6;
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x70))
              (*(int **)(unaff_ESI + 0xac),*(undefined4 *)(unaff_ESI + 0x11c),0,dVar4,
               0x3ff0000000000000,0);
    fVar3 = SUB84(dVar4,0);
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x58))(*(int **)(unaff_ESI + 0xac),uVar1,1);
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x6c))
              (*(int **)(unaff_ESI + 0xac),uVar1,DAT_00f092fc,(double)fVar5,0x3ff0000000000000,0);
    (**(code **)(**(int **)(unaff_ESI + 0xac) + 0x70))
              (*(int **)(unaff_ESI + 0xac),uVar1,DAT_00f092fc,(double)fVar3,0x3ff0000000000000,0);
    *(uint *)(unaff_ESI + 0x11c) = uVar1;
  }
  return;
}

