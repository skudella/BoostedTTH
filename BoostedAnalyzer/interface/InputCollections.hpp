#ifndef BOOSTEDTTH_BOOSTEDANALYZER_INPUTCOLLECTIONS_HPP
#define BOOSTEDTTH_BOOSTEDANALYZER_INPUTCOLLECTIONS_HPP

#include <vector>
#include <map>

#include "DataFormats/Common/interface/TriggerResults.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"
#include "BoostedTTH/BoostedObjects/interface/SubFilterJet.h"
#include "BoostedTTH/BoostedObjects/interface/HEPTopJet.h"
#include "HLTrigger/HLTcore/interface/HLTConfigProvider.h"
#include "BoostedTTH/BoostedAnalyzer/interface/GenTopEvent.hpp"
#include "BoostedTTH/BoostedAnalyzer/interface/EventInfo.hpp"
#include "BoostedTTH/BoostedAnalyzer/interface/ForTests.hpp"
#include "BoostedTTH/BoostedAnalyzer/interface/TriggerInfo.hpp"

enum SampleType{data,tth,tt,nonttbkg};

struct InputCollections{
InputCollections(   const EventInfo&                              eventInfo_,
		    const TriggerInfo&                            triggerInfo_,
		    const std::vector<reco::Vertex>&              selectedPVs_,
                    const std::vector<pat::Muon>&                 selectedMuons_,
                    const std::vector<pat::Muon>&                 selectedMuonsLoose_,
                    const std::vector<pat::Electron>&             selectedElectrons_,
                    const std::vector<pat::Electron>&             selectedElectronsLoose_,
                    const std::vector<pat::Jet>&                  selectedJets_,
                    const std::vector<pat::Jet>&                  selectedJetsLoose_,
                    const pat::MET&                               pfMET_,
                    const boosted::HEPTopJetCollection&           selectedHEPTopJets_,
                    const boosted::SubFilterJetCollection&        selectedSubFilterJets_,
		    const GenTopEvent&                            genTopEvt_,
                    const std::vector<reco::GenJet>&              selectedGenJets_,
                    const SampleType                              sampleType_,
                    const std::map<std::string,float>&            weights_
		    ): 
  eventInfo(eventInfo_),
  triggerInfo(triggerInfo_),
  selectedPVs(selectedPVs_),
  selectedMuons(selectedMuons_),
  selectedMuonsLoose(selectedMuonsLoose_),
  selectedElectrons(selectedElectrons_),
  selectedElectronsLoose(selectedElectronsLoose_),
  selectedJets(selectedJets_),
  selectedJetsLoose(selectedJetsLoose_),
  pfMET(pfMET_),
  selectedHEPTopJets(selectedHEPTopJets_),
  selectedSubFilterJets(selectedSubFilterJets_),
  genTopEvt(genTopEvt_),
  selectedGenJets(selectedGenJets_),
  sampleType(sampleType_),
  weights(weights_)
  {}
  
  const EventInfo&                              eventInfo;
  const TriggerInfo&                            triggerInfo;
  const std::vector<reco::Vertex>&              selectedPVs;
  const std::vector<pat::Muon>&                 selectedMuons;
  const std::vector<pat::Muon>&                 selectedMuonsLoose;
  const std::vector<pat::Electron>&             selectedElectrons;
  const std::vector<pat::Electron>&             selectedElectronsLoose;
  const std::vector<pat::Jet>&                  selectedJets;
  const std::vector<pat::Jet>&                  selectedJetsLoose;
  const pat::MET&                               pfMET;
  const boosted::HEPTopJetCollection&           selectedHEPTopJets;
  const boosted::SubFilterJetCollection&        selectedSubFilterJets;
  const GenTopEvent&                            genTopEvt;
  const std::vector<reco::GenJet>&              selectedGenJets;
  const SampleType                              sampleType;
  const std::map<std::string,float>&            weights;

  void DumpFatJets();
  void DumpSyncExe();
};

#endif
