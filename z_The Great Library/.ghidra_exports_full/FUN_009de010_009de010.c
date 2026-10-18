// FUN_009de010 @ 009de010 body=[[009de010, 009de09c]]


void FUN_009de010(float param_1,float param_2,undefined4 param_3)

{
  undefined8 *unaff_ESI;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00b35410();
  fVar2 = (float10)FUN_00b352e0();
  *unaff_ESI = CONCAT44(param_2 * (float)fVar1 + param_1 * (float)fVar2,
                        param_1 * (float)fVar1 - param_2 * (float)fVar2);
  *(undefined4 *)(unaff_ESI + 1) = param_3;
  return;
}

