// FUN_00644a70 @ 00644a70 body=[[00644a70, 00644b30]]


void FUN_00644a70(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float fStack_50;
  int local_48 [13];
  float local_14;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x10);
  if (param_3 != '\0') {
    fStack_50 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x21) >> 0x20);
    pcVar2 = *(code **)(*param_2 + 0xa4);
    piVar3 = param_2 + 0x15;
    piVar5 = local_48;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar5 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    local_14 = fStack_50 + 1.0;
    (*pcVar2)(local_48);
  }
  piVar3 = (int *)FUN_007eb4f0(param_2 + 0x15);
  pcVar2 = *(code **)(*param_2 + 0x80);
  piVar5 = param_2 + 0x25;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar5 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + 1;
  }
  (*pcVar2)();
  (**(code **)(*param_2 + 0x74))(uVar1);
  *(undefined1 *)(param_1 + 0x3a28) = 1;
  return;
}

