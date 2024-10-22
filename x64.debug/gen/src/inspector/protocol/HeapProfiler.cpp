// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "src/inspector/protocol/HeapProfiler.h"

#include "src/inspector/protocol/Protocol.h"

namespace v8_inspector {
namespace protocol {
namespace HeapProfiler {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "HeapProfiler";
const char Metainfo::commandPrefix[] = "HeapProfiler.";
const char Metainfo::version[] = "1.3";

std::unique_ptr<SamplingHeapProfileNode> SamplingHeapProfileNode::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingHeapProfileNode> result(new SamplingHeapProfileNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* callFrameValue = object->get("callFrame");
    errors->setName("callFrame");
    result->m_callFrame = ValueConversions<protocol::Runtime::CallFrame>::fromValue(callFrameValue, errors);
    protocol::Value* selfSizeValue = object->get("selfSize");
    errors->setName("selfSize");
    result->m_selfSize = ValueConversions<double>::fromValue(selfSizeValue, errors);
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<int>::fromValue(idValue, errors);
    protocol::Value* childrenValue = object->get("children");
    errors->setName("children");
    result->m_children = ValueConversions<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileNode>>::fromValue(childrenValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingHeapProfileNode::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("callFrame", ValueConversions<protocol::Runtime::CallFrame>::toValue(m_callFrame.get()));
    result->setValue("selfSize", ValueConversions<double>::toValue(m_selfSize));
    result->setValue("id", ValueConversions<int>::toValue(m_id));
    result->setValue("children", ValueConversions<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileNode>>::toValue(m_children.get()));
    return result;
}

std::unique_ptr<SamplingHeapProfileNode> SamplingHeapProfileNode::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SamplingHeapProfileSample> SamplingHeapProfileSample::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingHeapProfileSample> result(new SamplingHeapProfileSample());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<double>::fromValue(sizeValue, errors);
    protocol::Value* nodeIdValue = object->get("nodeId");
    errors->setName("nodeId");
    result->m_nodeId = ValueConversions<int>::fromValue(nodeIdValue, errors);
    protocol::Value* ordinalValue = object->get("ordinal");
    errors->setName("ordinal");
    result->m_ordinal = ValueConversions<double>::fromValue(ordinalValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingHeapProfileSample::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("size", ValueConversions<double>::toValue(m_size));
    result->setValue("nodeId", ValueConversions<int>::toValue(m_nodeId));
    result->setValue("ordinal", ValueConversions<double>::toValue(m_ordinal));
    return result;
}

std::unique_ptr<SamplingHeapProfileSample> SamplingHeapProfileSample::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<SamplingHeapProfile> SamplingHeapProfile::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SamplingHeapProfile> result(new SamplingHeapProfile());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* headValue = object->get("head");
    errors->setName("head");
    result->m_head = ValueConversions<protocol::HeapProfiler::SamplingHeapProfileNode>::fromValue(headValue, errors);
    protocol::Value* samplesValue = object->get("samples");
    errors->setName("samples");
    result->m_samples = ValueConversions<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileSample>>::fromValue(samplesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SamplingHeapProfile::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("head", ValueConversions<protocol::HeapProfiler::SamplingHeapProfileNode>::toValue(m_head.get()));
    result->setValue("samples", ValueConversions<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileSample>>::toValue(m_samples.get()));
    return result;
}

std::unique_ptr<SamplingHeapProfile> SamplingHeapProfile::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<AddHeapSnapshotChunkNotification> AddHeapSnapshotChunkNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AddHeapSnapshotChunkNotification> result(new AddHeapSnapshotChunkNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* chunkValue = object->get("chunk");
    errors->setName("chunk");
    result->m_chunk = ValueConversions<String>::fromValue(chunkValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AddHeapSnapshotChunkNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("chunk", ValueConversions<String>::toValue(m_chunk));
    return result;
}

std::unique_ptr<AddHeapSnapshotChunkNotification> AddHeapSnapshotChunkNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<HeapStatsUpdateNotification> HeapStatsUpdateNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<HeapStatsUpdateNotification> result(new HeapStatsUpdateNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* statsUpdateValue = object->get("statsUpdate");
    errors->setName("statsUpdate");
    result->m_statsUpdate = ValueConversions<protocol::Array<int>>::fromValue(statsUpdateValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> HeapStatsUpdateNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("statsUpdate", ValueConversions<protocol::Array<int>>::toValue(m_statsUpdate.get()));
    return result;
}

std::unique_ptr<HeapStatsUpdateNotification> HeapStatsUpdateNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<LastSeenObjectIdNotification> LastSeenObjectIdNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LastSeenObjectIdNotification> result(new LastSeenObjectIdNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* lastSeenObjectIdValue = object->get("lastSeenObjectId");
    errors->setName("lastSeenObjectId");
    result->m_lastSeenObjectId = ValueConversions<int>::fromValue(lastSeenObjectIdValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::fromValue(timestampValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LastSeenObjectIdNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("lastSeenObjectId", ValueConversions<int>::toValue(m_lastSeenObjectId));
    result->setValue("timestamp", ValueConversions<double>::toValue(m_timestamp));
    return result;
}

std::unique_ptr<LastSeenObjectIdNotification> LastSeenObjectIdNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

std::unique_ptr<ReportHeapSnapshotProgressNotification> ReportHeapSnapshotProgressNotification::fromValue(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ReportHeapSnapshotProgressNotification> result(new ReportHeapSnapshotProgressNotification());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* doneValue = object->get("done");
    errors->setName("done");
    result->m_done = ValueConversions<int>::fromValue(doneValue, errors);
    protocol::Value* totalValue = object->get("total");
    errors->setName("total");
    result->m_total = ValueConversions<int>::fromValue(totalValue, errors);
    protocol::Value* finishedValue = object->get("finished");
    if (finishedValue) {
        errors->setName("finished");
        result->m_finished = ValueConversions<bool>::fromValue(finishedValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ReportHeapSnapshotProgressNotification::toValue() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("done", ValueConversions<int>::toValue(m_done));
    result->setValue("total", ValueConversions<int>::toValue(m_total));
    if (m_finished.isJust())
        result->setValue("finished", ValueConversions<bool>::toValue(m_finished.fromJust()));
    return result;
}

std::unique_ptr<ReportHeapSnapshotProgressNotification> ReportHeapSnapshotProgressNotification::clone() const
{
    ErrorSupport errors;
    return fromValue(toValue().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::addHeapSnapshotChunk(const String& chunk)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<AddHeapSnapshotChunkNotification> messageData = AddHeapSnapshotChunkNotification::create()
        .setChunk(chunk)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("HeapProfiler.addHeapSnapshotChunk", std::move(messageData)));
}

void Frontend::heapStatsUpdate(std::unique_ptr<protocol::Array<int>> statsUpdate)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<HeapStatsUpdateNotification> messageData = HeapStatsUpdateNotification::create()
        .setStatsUpdate(std::move(statsUpdate))
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("HeapProfiler.heapStatsUpdate", std::move(messageData)));
}

void Frontend::lastSeenObjectId(int lastSeenObjectId, double timestamp)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<LastSeenObjectIdNotification> messageData = LastSeenObjectIdNotification::create()
        .setLastSeenObjectId(lastSeenObjectId)
        .setTimestamp(timestamp)
        .build();
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("HeapProfiler.lastSeenObjectId", std::move(messageData)));
}

void Frontend::reportHeapSnapshotProgress(int done, int total, Maybe<bool> finished)
{
    if (!m_frontendChannel)
        return;
    std::unique_ptr<ReportHeapSnapshotProgressNotification> messageData = ReportHeapSnapshotProgressNotification::create()
        .setDone(done)
        .setTotal(total)
        .build();
    if (finished.isJust())
        messageData->setFinished(std::move(finished).takeJust());
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("HeapProfiler.reportHeapSnapshotProgress", std::move(messageData)));
}

void Frontend::resetProfiles()
{
    if (!m_frontendChannel)
        return;
    m_frontendChannel->sendProtocolNotification(InternalResponse::createNotification("HeapProfiler.resetProfiles"));
}

void Frontend::flush()
{
    m_frontendChannel->flushProtocolNotifications();
}

void Frontend::sendRawNotification(const String& notification)
{
    m_frontendChannel->sendProtocolNotification(InternalRawNotification::create(notification));
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["HeapProfiler.addInspectedHeapObject"] = &DispatcherImpl::addInspectedHeapObject;
        m_dispatchMap["HeapProfiler.collectGarbage"] = &DispatcherImpl::collectGarbage;
        m_dispatchMap["HeapProfiler.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["HeapProfiler.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["HeapProfiler.getHeapObjectId"] = &DispatcherImpl::getHeapObjectId;
        m_dispatchMap["HeapProfiler.getObjectByHeapObjectId"] = &DispatcherImpl::getObjectByHeapObjectId;
        m_dispatchMap["HeapProfiler.getSamplingProfile"] = &DispatcherImpl::getSamplingProfile;
        m_dispatchMap["HeapProfiler.startSampling"] = &DispatcherImpl::startSampling;
        m_dispatchMap["HeapProfiler.startTrackingHeapObjects"] = &DispatcherImpl::startTrackingHeapObjects;
        m_dispatchMap["HeapProfiler.stopSampling"] = &DispatcherImpl::stopSampling;
        m_dispatchMap["HeapProfiler.stopTrackingHeapObjects"] = &DispatcherImpl::stopTrackingHeapObjects;
        m_dispatchMap["HeapProfiler.takeHeapSnapshot"] = &DispatcherImpl::takeHeapSnapshot;
    }
    ~DispatcherImpl() override { }
    bool canDispatch(const String& method) override;
    void dispatch(int callId, const String& method, const String& message, std::unique_ptr<protocol::DictionaryValue> messageObject) override;
    std::unordered_map<String, String>& redirects() { return m_redirects; }

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = std::unordered_map<String, CallHandler>;
    DispatchMap m_dispatchMap;
    std::unordered_map<String, String> m_redirects;

    void addInspectedHeapObject(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void collectGarbage(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void enable(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getHeapObjectId(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getObjectByHeapObjectId(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getSamplingProfile(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void startSampling(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void startTrackingHeapObjects(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void stopSampling(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void stopTrackingHeapObjects(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void takeHeapSnapshot(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
};

bool DispatcherImpl::canDispatch(const String& method) {
    return m_dispatchMap.find(method) != m_dispatchMap.end();
}

void DispatcherImpl::dispatch(int callId, const String& method, const String& message, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    std::unordered_map<String, CallHandler>::iterator it = m_dispatchMap.find(method);
    DCHECK(it != m_dispatchMap.end());
    protocol::ErrorSupport errors;
    (this->*(it->second))(callId, method, message, std::move(messageObject), &errors);
}


void DispatcherImpl::addInspectedHeapObject(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* heapObjectIdValue = object ? object->get("heapObjectId") : nullptr;
    errors->setName("heapObjectId");
    String in_heapObjectId = ValueConversions<String>::fromValue(heapObjectIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->addInspectedHeapObject(in_heapObjectId);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::collectGarbage(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->collectGarbage();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::disable(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->disable();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::enable(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::getHeapObjectId(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* objectIdValue = object ? object->get("objectId") : nullptr;
    errors->setName("objectId");
    String in_objectId = ValueConversions<String>::fromValue(objectIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }
    // Declare output parameters.
    String out_heapSnapshotObjectId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getHeapObjectId(in_objectId, &out_heapSnapshotObjectId);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("heapSnapshotObjectId", ValueConversions<String>::toValue(out_heapSnapshotObjectId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::getObjectByHeapObjectId(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* objectIdValue = object ? object->get("objectId") : nullptr;
    errors->setName("objectId");
    String in_objectId = ValueConversions<String>::fromValue(objectIdValue, errors);
    protocol::Value* objectGroupValue = object ? object->get("objectGroup") : nullptr;
    Maybe<String> in_objectGroup;
    if (objectGroupValue) {
        errors->setName("objectGroup");
        in_objectGroup = ValueConversions<String>::fromValue(objectGroupValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Runtime::RemoteObject> out_result;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getObjectByHeapObjectId(in_objectId, std::move(in_objectGroup), &out_result);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("result", ValueConversions<protocol::Runtime::RemoteObject>::toValue(out_result.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::getSamplingProfile(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfile> out_profile;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getSamplingProfile(&out_profile);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("profile", ValueConversions<protocol::HeapProfiler::SamplingHeapProfile>::toValue(out_profile.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::startSampling(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* samplingIntervalValue = object ? object->get("samplingInterval") : nullptr;
    Maybe<double> in_samplingInterval;
    if (samplingIntervalValue) {
        errors->setName("samplingInterval");
        in_samplingInterval = ValueConversions<double>::fromValue(samplingIntervalValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->startSampling(std::move(in_samplingInterval));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::startTrackingHeapObjects(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* trackAllocationsValue = object ? object->get("trackAllocations") : nullptr;
    Maybe<bool> in_trackAllocations;
    if (trackAllocationsValue) {
        errors->setName("trackAllocations");
        in_trackAllocations = ValueConversions<bool>::fromValue(trackAllocationsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->startTrackingHeapObjects(std::move(in_trackAllocations));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::stopSampling(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfile> out_profile;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->stopSampling(&out_profile);
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (response.status() == DispatchResponse::kSuccess) {
        result->setValue("profile", ValueConversions<protocol::HeapProfiler::SamplingHeapProfile>::toValue(out_profile.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response, std::move(result));
    return;
}

void DispatcherImpl::stopTrackingHeapObjects(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* reportProgressValue = object ? object->get("reportProgress") : nullptr;
    Maybe<bool> in_reportProgress;
    if (reportProgressValue) {
        errors->setName("reportProgress");
        in_reportProgress = ValueConversions<bool>::fromValue(reportProgressValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->stopTrackingHeapObjects(std::move(in_reportProgress));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

void DispatcherImpl::takeHeapSnapshot(int callId, const String& method, const String& message, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* reportProgressValue = object ? object->get("reportProgress") : nullptr;
    Maybe<bool> in_reportProgress;
    if (reportProgressValue) {
        errors->setName("reportProgress");
        in_reportProgress = ValueConversions<bool>::fromValue(reportProgressValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, DispatchResponse::kInvalidParams, kInvalidParamsString, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->takeHeapSnapshot(std::move(in_reportProgress));
    if (response.status() == DispatchResponse::kFallThrough) {
        channel()->fallThrough(callId, method, message);
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(callId, response);
    return;
}

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    std::unique_ptr<DispatcherImpl> dispatcher(new DispatcherImpl(uber->channel(), backend));
    uber->setupRedirects(dispatcher->redirects());
    uber->registerBackend("HeapProfiler", std::move(dispatcher));
}

} // HeapProfiler
} // namespace v8_inspector
} // namespace protocol
