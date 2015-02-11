#ifndef INPUTCOLLECTIONS_HPP
#define INPUTCOLLECTIONS_HPP

#include <vector>
#include <map>

#include "BoostedTTH/BoostedObjects/interface/Event.h"
#include "DataFormats/Common/interface/TriggerResults.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"
#include "BoostedTTH/BoostedObjects/interface/SubFilterJet.h"
#include "BoostedTTH/BoostedObjects/interface/HEPTopJet.h"

enum SampleType{data,tth,tt,nonttbkg};

struct InputCollections{
  InputCollections( const boosted::Event&                         event_,
                    const pat::TriggerObjectStandAloneCollection& selectedTrigger_,
                    const edm::TriggerResults&                    triggerResults_,
                    const reco::VertexCollection&                 selectedPVs_,
                    const std::vector<pat::Muon>&                 selectedMuons_,
                    const std::vector<pat::Muon>&                 selectedMuonsLoose_,
                    const std::vector<pat::Electron>&             selectedElectrons_,
                    const std::vector<pat::Electron>&             selectedElectronsLoose_,
                    const std::vector<pat::Jet>&                  selectedJets_,
                    const std::vector<pat::Jet>&                  selectedJetsLoose_,
                    const std::vector<pat::MET>&                  pfMets_,
                    const boosted::HEPTopJetCollection&           selectedHEPTopJets_,
                    const boosted::SubFilterJetCollection&        selectedSubFilterJets_,
                    const std::vector<reco::GenParticle>&         mcParticles_,
                    const std::vector<reco::GenJet>&              selectedGenJets_,
                    const SampleType                              sampleType_,
                    const std::map<std::string,float>&            weights_
                  ):
                    event(event_),
                    selectedTrigger(selectedTrigger_),
                    triggerResults(triggerResults_),
                    selectedPVs(selectedPVs_),
                    selectedMuons(selectedMuons_),
                    selectedMuonsLoose(selectedMuonsLoose_),
                    selectedElectrons(selectedElectrons_),
                    selectedElectronsLoose(selectedElectronsLoose_),
                    selectedJets(selectedJets_),
                    selectedJetsLoose(selectedJetsLoose_),
                    pfMets(pfMets_),
                    selectedHEPTopJets(selectedHEPTopJets_),
                    selectedSubFilterJets(selectedSubFilterJets_),
                    mcParticles(mcParticles_),
                    selectedGenJets(selectedGenJets_),
                    sampleType(sampleType_),
                    weights(weights_){}
  
  const boosted::Event&                         event;
  const pat::TriggerObjectStandAloneCollection& selectedTrigger;
  const edm::TriggerResults&                    triggerResults;
  const reco::VertexCollection&                 selectedPVs;
  const std::vector<pat::Muon>&                 selectedMuons;
  const std::vector<pat::Muon>&                 selectedMuonsLoose;
  const std::vector<pat::Electron>&             selectedElectrons;
  const std::vector<pat::Electron>&             selectedElectronsLoose;
  const std::vector<pat::Jet>&                  selectedJets;
  const std::vector<pat::Jet>&                  selectedJetsLoose;
  const std::vector<pat::MET>&                  pfMets;
  const boosted::HEPTopJetCollection&           selectedHEPTopJets;
  const boosted::SubFilterJetCollection&        selectedSubFilterJets;
  const std::vector<reco::GenParticle>&         mcParticles;
  const std::vector<reco::GenJet>&              selectedGenJets;
  const SampleType                              sampleType;
  const std::map<std::string,float>&            weights;
};

#endif
