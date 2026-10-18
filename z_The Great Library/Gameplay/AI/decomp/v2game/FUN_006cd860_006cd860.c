// FUN_006cd860 @ 006cd860 body=[[006cd860, 006cd92f]]


void FUN_006cd860(short *param_1,short *param_2,short *param_3)

{
  short sVar1;
  char cVar2;
  
  cVar2 = FUN_006bed80((int)*param_2,(int)*param_1);
  if (cVar2 != '\0') {
    sVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = sVar1;
  }
  cVar2 = FUN_006bed80((int)*param_3,(int)*param_2);
  if (cVar2 != '\0') {
    sVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = sVar1;
  }
  cVar2 = FUN_006bed80((int)*param_2,(int)*param_1);
  if (cVar2 != '\0') {
    sVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = sVar1;
  }
  return;
}

