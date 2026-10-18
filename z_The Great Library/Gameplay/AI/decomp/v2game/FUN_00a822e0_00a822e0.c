// FUN_00a822e0 @ 00a822e0 body=[[00a822e0, 00a824f3]]


void FUN_00a822e0(void)

{
  int *piVar1;
  uint uVar2;
  int unaff_ESI;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 auStack_78 [3];
  double dStack_6c;
  int local_60 [23];
  
  piVar1 = *(int **)(unaff_ESI + 0x14c);
  (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x60))(*(int **)(unaff_ESI + 0x180));
  uVar2 = (uint)(*(int *)(unaff_ESI + 0x14c) == 0);
  auStack_78[0] = 0;
  (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x44))
            (*(int **)(unaff_ESI + 0x180),*(int *)(unaff_ESI + 0x14c),auStack_78);
  fVar3 = (float10)(**(code **)(local_60[0] + 0x10))(local_60);
  if (fVar3 - (float10)0.20000000298023224 < (float10)dStack_6c) {
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x40))(*(int **)(unaff_ESI + 0x180),uVar2,piVar1);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x84))(*(int **)(unaff_ESI + 0x180),uVar2);
    piVar8 = *(int **)(unaff_ESI + 0x180);
    uVar4 = *(undefined4 *)(unaff_ESI + 0x14c);
    (**(code **)(*piVar8 + 0x84))(piVar8,uVar4);
    fVar3 = (float10)(**(code **)(**(int **)(unaff_ESI + 0x180) + 0x3c))
                               (*(int **)(unaff_ESI + 0x180));
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x78))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),0,
               (double)(fVar3 + (float10)0.20000000298023224));
    uVar7 = 0;
    uVar5 = 0x3fc99999;
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x6c))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),0,
               CONCAT44(uVar4,piVar8),0xa0000000,0x3fc99999,0);
    uVar6 = CONCAT44(uVar7,uVar5);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x70))
              (*(int **)(unaff_ESI + 0x180),*(undefined4 *)(unaff_ESI + 0x14c),0,uVar6,
               0x3fc99999a0000000,0);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x58))(*(int **)(unaff_ESI + 0x180),uVar2,1);
    uVar5 = 0;
    uVar4 = 0x3fc99999;
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x6c))
              (*(int **)(unaff_ESI + 0x180),uVar2,DAT_00f092fc,uVar6,0xa0000000,0x3fc99999,0);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x70))
              (*(int **)(unaff_ESI + 0x180),uVar2,DAT_00f092fc,CONCAT44(uVar5,uVar4),
               0x3fc99999a0000000,0);
    (**(code **)(**(int **)(unaff_ESI + 0x180) + 0x54))(*(int **)(unaff_ESI + 0x180),uVar2,0);
    *(uint *)(unaff_ESI + 0x14c) = uVar2;
  }
  (**(code **)(*piVar1 + 8))();
  return;
}

