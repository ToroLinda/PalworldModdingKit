#include "PalPassiveSkillComponent.h"
#include "Net/UnrealNetwork.h"

UPalPassiveSkillComponent::UPalPassiveSkillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalPassiveSkillComponent::SetupSkillFromSelf(UObject* OwnerObject, const TArray<FName>& skillList) {
}

void UPalPassiveSkillComponent::SetDisablePassiveSkill(FName flagName, bool isDisable) {
}

void UPalPassiveSkillComponent::OverrideDamageInfoBySkill(FPalDamageInfo& inoutDamageInfo) {
}

void UPalPassiveSkillComponent::OnUpdateCharacterRank(int32 NowRank, int32 OldRank) {
}

void UPalPassiveSkillComponent::OnStartSkillEffect(EPalPassiveSkillEffectType EffectType, float Value) {
}

void UPalPassiveSkillComponent::OnRep_SkillInfos() {
}

void UPalPassiveSkillComponent::OnInitializedCharacter(APalCharacter* OwnerCharacter) {
}

void UPalPassiveSkillComponent::OnEndSkillEffect(EPalPassiveSkillEffectType EffectType) {
}

void UPalPassiveSkillComponent::OnChangeSkillEffectValue(EPalPassiveSkillEffectType EffectType, float Value) {
}

bool UPalPassiveSkillComponent::IsDisablePassiveSkill() const {
    return false;
}

bool UPalPassiveSkillComponent::HasSkill(EPalPassiveSkillEffectType Type, bool containEquip) {
    return false;
}

float UPalPassiveSkillComponent::GetParameterWithPassiveSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, bool containEquip) {
    return 0.0f;
}

EPalCurveBall UPalPassiveSkillComponent::GetCurveBallTypePassiveEffectByPlayerEquip() {
    return EPalCurveBall::None;
}

void UPalPassiveSkillComponent::AddSpecialAttackRateInfo(TArray<FPalSpecialAttackRateInfo>& SpecialAttackRateInfos) {
}

void UPalPassiveSkillComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalPassiveSkillComponent, SkillInfos);
}


