// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef v8_inspector_protocol_HeapProfiler_h
#define v8_inspector_protocol_HeapProfiler_h

#include "src/inspector/protocol/Protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "src/inspector/protocol/Runtime.h"

namespace v8_inspector {
namespace protocol {
namespace HeapProfiler {

// ------------- Forward and enum declarations.
using HeapSnapshotObjectId = String;
class SamplingHeapProfileNode;
class SamplingHeapProfileSample;
class SamplingHeapProfile;
class AddHeapSnapshotChunkNotification;
class HeapStatsUpdateNotification;
class LastSeenObjectIdNotification;
class ReportHeapSnapshotProgressNotification;
using ResetProfilesNotification = Object;

// ------------- Type and builder declarations.

class  SamplingHeapProfileNode : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingHeapProfileNode);
public:
    static std::unique_ptr<SamplingHeapProfileNode> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingHeapProfileNode() override { }

    protocol::Runtime::CallFrame* getCallFrame() { return m_callFrame.get(); }
    void setCallFrame(std::unique_ptr<protocol::Runtime::CallFrame> value) { m_callFrame = std::move(value); }

    double getSelfSize() { return m_selfSize; }
    void setSelfSize(double value) { m_selfSize = value; }

    int getId() { return m_id; }
    void setId(int value) { m_id = value; }

    protocol::Array<protocol::HeapProfiler::SamplingHeapProfileNode>* getChildren() { return m_children.get(); }
    void setChildren(std::unique_ptr<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileNode>> value) { m_children = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SamplingHeapProfileNode> clone() const;

    template<int STATE>
    class SamplingHeapProfileNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            CallFrameSet = 1 << 1,
            SelfSizeSet = 1 << 2,
            IdSet = 1 << 3,
            ChildrenSet = 1 << 4,
            AllFieldsSet = (CallFrameSet | SelfSizeSet | IdSet | ChildrenSet | 0)};


        SamplingHeapProfileNodeBuilder<STATE | CallFrameSet>& setCallFrame(std::unique_ptr<protocol::Runtime::CallFrame> value)
        {
            static_assert(!(STATE & CallFrameSet), "property callFrame should not be set yet");
            m_result->setCallFrame(std::move(value));
            return castState<CallFrameSet>();
        }

        SamplingHeapProfileNodeBuilder<STATE | SelfSizeSet>& setSelfSize(double value)
        {
            static_assert(!(STATE & SelfSizeSet), "property selfSize should not be set yet");
            m_result->setSelfSize(value);
            return castState<SelfSizeSet>();
        }

        SamplingHeapProfileNodeBuilder<STATE | IdSet>& setId(int value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        SamplingHeapProfileNodeBuilder<STATE | ChildrenSet>& setChildren(std::unique_ptr<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileNode>> value)
        {
            static_assert(!(STATE & ChildrenSet), "property children should not be set yet");
            m_result->setChildren(std::move(value));
            return castState<ChildrenSet>();
        }

        std::unique_ptr<SamplingHeapProfileNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingHeapProfileNode;
        SamplingHeapProfileNodeBuilder() : m_result(new SamplingHeapProfileNode()) { }

        template<int STEP> SamplingHeapProfileNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingHeapProfileNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfileNode> m_result;
    };

    static SamplingHeapProfileNodeBuilder<0> create()
    {
        return SamplingHeapProfileNodeBuilder<0>();
    }

private:
    SamplingHeapProfileNode()
    {
          m_selfSize = 0;
          m_id = 0;
    }

    std::unique_ptr<protocol::Runtime::CallFrame> m_callFrame;
    double m_selfSize;
    int m_id;
    std::unique_ptr<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileNode>> m_children;
};


class  SamplingHeapProfileSample : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingHeapProfileSample);
public:
    static std::unique_ptr<SamplingHeapProfileSample> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingHeapProfileSample() override { }

    double getSize() { return m_size; }
    void setSize(double value) { m_size = value; }

    int getNodeId() { return m_nodeId; }
    void setNodeId(int value) { m_nodeId = value; }

    double getOrdinal() { return m_ordinal; }
    void setOrdinal(double value) { m_ordinal = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SamplingHeapProfileSample> clone() const;

    template<int STATE>
    class SamplingHeapProfileSampleBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SizeSet = 1 << 1,
            NodeIdSet = 1 << 2,
            OrdinalSet = 1 << 3,
            AllFieldsSet = (SizeSet | NodeIdSet | OrdinalSet | 0)};


        SamplingHeapProfileSampleBuilder<STATE | SizeSet>& setSize(double value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->setSize(value);
            return castState<SizeSet>();
        }

        SamplingHeapProfileSampleBuilder<STATE | NodeIdSet>& setNodeId(int value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->setNodeId(value);
            return castState<NodeIdSet>();
        }

        SamplingHeapProfileSampleBuilder<STATE | OrdinalSet>& setOrdinal(double value)
        {
            static_assert(!(STATE & OrdinalSet), "property ordinal should not be set yet");
            m_result->setOrdinal(value);
            return castState<OrdinalSet>();
        }

        std::unique_ptr<SamplingHeapProfileSample> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingHeapProfileSample;
        SamplingHeapProfileSampleBuilder() : m_result(new SamplingHeapProfileSample()) { }

        template<int STEP> SamplingHeapProfileSampleBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingHeapProfileSampleBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfileSample> m_result;
    };

    static SamplingHeapProfileSampleBuilder<0> create()
    {
        return SamplingHeapProfileSampleBuilder<0>();
    }

private:
    SamplingHeapProfileSample()
    {
          m_size = 0;
          m_nodeId = 0;
          m_ordinal = 0;
    }

    double m_size;
    int m_nodeId;
    double m_ordinal;
};


class  SamplingHeapProfile : public Serializable{
    PROTOCOL_DISALLOW_COPY(SamplingHeapProfile);
public:
    static std::unique_ptr<SamplingHeapProfile> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~SamplingHeapProfile() override { }

    protocol::HeapProfiler::SamplingHeapProfileNode* getHead() { return m_head.get(); }
    void setHead(std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfileNode> value) { m_head = std::move(value); }

    protocol::Array<protocol::HeapProfiler::SamplingHeapProfileSample>* getSamples() { return m_samples.get(); }
    void setSamples(std::unique_ptr<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileSample>> value) { m_samples = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<SamplingHeapProfile> clone() const;

    template<int STATE>
    class SamplingHeapProfileBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            HeadSet = 1 << 1,
            SamplesSet = 1 << 2,
            AllFieldsSet = (HeadSet | SamplesSet | 0)};


        SamplingHeapProfileBuilder<STATE | HeadSet>& setHead(std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfileNode> value)
        {
            static_assert(!(STATE & HeadSet), "property head should not be set yet");
            m_result->setHead(std::move(value));
            return castState<HeadSet>();
        }

        SamplingHeapProfileBuilder<STATE | SamplesSet>& setSamples(std::unique_ptr<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileSample>> value)
        {
            static_assert(!(STATE & SamplesSet), "property samples should not be set yet");
            m_result->setSamples(std::move(value));
            return castState<SamplesSet>();
        }

        std::unique_ptr<SamplingHeapProfile> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingHeapProfile;
        SamplingHeapProfileBuilder() : m_result(new SamplingHeapProfile()) { }

        template<int STEP> SamplingHeapProfileBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingHeapProfileBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfile> m_result;
    };

    static SamplingHeapProfileBuilder<0> create()
    {
        return SamplingHeapProfileBuilder<0>();
    }

private:
    SamplingHeapProfile()
    {
    }

    std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfileNode> m_head;
    std::unique_ptr<protocol::Array<protocol::HeapProfiler::SamplingHeapProfileSample>> m_samples;
};


class  AddHeapSnapshotChunkNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(AddHeapSnapshotChunkNotification);
public:
    static std::unique_ptr<AddHeapSnapshotChunkNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~AddHeapSnapshotChunkNotification() override { }

    String getChunk() { return m_chunk; }
    void setChunk(const String& value) { m_chunk = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<AddHeapSnapshotChunkNotification> clone() const;

    template<int STATE>
    class AddHeapSnapshotChunkNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            ChunkSet = 1 << 1,
            AllFieldsSet = (ChunkSet | 0)};


        AddHeapSnapshotChunkNotificationBuilder<STATE | ChunkSet>& setChunk(const String& value)
        {
            static_assert(!(STATE & ChunkSet), "property chunk should not be set yet");
            m_result->setChunk(value);
            return castState<ChunkSet>();
        }

        std::unique_ptr<AddHeapSnapshotChunkNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AddHeapSnapshotChunkNotification;
        AddHeapSnapshotChunkNotificationBuilder() : m_result(new AddHeapSnapshotChunkNotification()) { }

        template<int STEP> AddHeapSnapshotChunkNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AddHeapSnapshotChunkNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::AddHeapSnapshotChunkNotification> m_result;
    };

    static AddHeapSnapshotChunkNotificationBuilder<0> create()
    {
        return AddHeapSnapshotChunkNotificationBuilder<0>();
    }

private:
    AddHeapSnapshotChunkNotification()
    {
    }

    String m_chunk;
};


class  HeapStatsUpdateNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(HeapStatsUpdateNotification);
public:
    static std::unique_ptr<HeapStatsUpdateNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~HeapStatsUpdateNotification() override { }

    protocol::Array<int>* getStatsUpdate() { return m_statsUpdate.get(); }
    void setStatsUpdate(std::unique_ptr<protocol::Array<int>> value) { m_statsUpdate = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<HeapStatsUpdateNotification> clone() const;

    template<int STATE>
    class HeapStatsUpdateNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            StatsUpdateSet = 1 << 1,
            AllFieldsSet = (StatsUpdateSet | 0)};


        HeapStatsUpdateNotificationBuilder<STATE | StatsUpdateSet>& setStatsUpdate(std::unique_ptr<protocol::Array<int>> value)
        {
            static_assert(!(STATE & StatsUpdateSet), "property statsUpdate should not be set yet");
            m_result->setStatsUpdate(std::move(value));
            return castState<StatsUpdateSet>();
        }

        std::unique_ptr<HeapStatsUpdateNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class HeapStatsUpdateNotification;
        HeapStatsUpdateNotificationBuilder() : m_result(new HeapStatsUpdateNotification()) { }

        template<int STEP> HeapStatsUpdateNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<HeapStatsUpdateNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::HeapStatsUpdateNotification> m_result;
    };

    static HeapStatsUpdateNotificationBuilder<0> create()
    {
        return HeapStatsUpdateNotificationBuilder<0>();
    }

private:
    HeapStatsUpdateNotification()
    {
    }

    std::unique_ptr<protocol::Array<int>> m_statsUpdate;
};


class  LastSeenObjectIdNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(LastSeenObjectIdNotification);
public:
    static std::unique_ptr<LastSeenObjectIdNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~LastSeenObjectIdNotification() override { }

    int getLastSeenObjectId() { return m_lastSeenObjectId; }
    void setLastSeenObjectId(int value) { m_lastSeenObjectId = value; }

    double getTimestamp() { return m_timestamp; }
    void setTimestamp(double value) { m_timestamp = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<LastSeenObjectIdNotification> clone() const;

    template<int STATE>
    class LastSeenObjectIdNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            LastSeenObjectIdSet = 1 << 1,
            TimestampSet = 1 << 2,
            AllFieldsSet = (LastSeenObjectIdSet | TimestampSet | 0)};


        LastSeenObjectIdNotificationBuilder<STATE | LastSeenObjectIdSet>& setLastSeenObjectId(int value)
        {
            static_assert(!(STATE & LastSeenObjectIdSet), "property lastSeenObjectId should not be set yet");
            m_result->setLastSeenObjectId(value);
            return castState<LastSeenObjectIdSet>();
        }

        LastSeenObjectIdNotificationBuilder<STATE | TimestampSet>& setTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->setTimestamp(value);
            return castState<TimestampSet>();
        }

        std::unique_ptr<LastSeenObjectIdNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class LastSeenObjectIdNotification;
        LastSeenObjectIdNotificationBuilder() : m_result(new LastSeenObjectIdNotification()) { }

        template<int STEP> LastSeenObjectIdNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<LastSeenObjectIdNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::LastSeenObjectIdNotification> m_result;
    };

    static LastSeenObjectIdNotificationBuilder<0> create()
    {
        return LastSeenObjectIdNotificationBuilder<0>();
    }

private:
    LastSeenObjectIdNotification()
    {
          m_lastSeenObjectId = 0;
          m_timestamp = 0;
    }

    int m_lastSeenObjectId;
    double m_timestamp;
};


class  ReportHeapSnapshotProgressNotification : public Serializable{
    PROTOCOL_DISALLOW_COPY(ReportHeapSnapshotProgressNotification);
public:
    static std::unique_ptr<ReportHeapSnapshotProgressNotification> fromValue(protocol::Value* value, ErrorSupport* errors);

    ~ReportHeapSnapshotProgressNotification() override { }

    int getDone() { return m_done; }
    void setDone(int value) { m_done = value; }

    int getTotal() { return m_total; }
    void setTotal(int value) { m_total = value; }

    bool hasFinished() { return m_finished.isJust(); }
    bool getFinished(bool defaultValue) { return m_finished.isJust() ? m_finished.fromJust() : defaultValue; }
    void setFinished(bool value) { m_finished = value; }

    std::unique_ptr<protocol::DictionaryValue> toValue() const;
    String serialize() override { return toValue()->serialize(); }
    std::unique_ptr<ReportHeapSnapshotProgressNotification> clone() const;

    template<int STATE>
    class ReportHeapSnapshotProgressNotificationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            DoneSet = 1 << 1,
            TotalSet = 1 << 2,
            AllFieldsSet = (DoneSet | TotalSet | 0)};


        ReportHeapSnapshotProgressNotificationBuilder<STATE | DoneSet>& setDone(int value)
        {
            static_assert(!(STATE & DoneSet), "property done should not be set yet");
            m_result->setDone(value);
            return castState<DoneSet>();
        }

        ReportHeapSnapshotProgressNotificationBuilder<STATE | TotalSet>& setTotal(int value)
        {
            static_assert(!(STATE & TotalSet), "property total should not be set yet");
            m_result->setTotal(value);
            return castState<TotalSet>();
        }

        ReportHeapSnapshotProgressNotificationBuilder<STATE>& setFinished(bool value)
        {
            m_result->setFinished(value);
            return *this;
        }

        std::unique_ptr<ReportHeapSnapshotProgressNotification> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ReportHeapSnapshotProgressNotification;
        ReportHeapSnapshotProgressNotificationBuilder() : m_result(new ReportHeapSnapshotProgressNotification()) { }

        template<int STEP> ReportHeapSnapshotProgressNotificationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ReportHeapSnapshotProgressNotificationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::HeapProfiler::ReportHeapSnapshotProgressNotification> m_result;
    };

    static ReportHeapSnapshotProgressNotificationBuilder<0> create()
    {
        return ReportHeapSnapshotProgressNotificationBuilder<0>();
    }

private:
    ReportHeapSnapshotProgressNotification()
    {
          m_done = 0;
          m_total = 0;
    }

    int m_done;
    int m_total;
    Maybe<bool> m_finished;
};


// ------------- Backend interface.

class  Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse addInspectedHeapObject(const String& in_heapObjectId) = 0;
    virtual DispatchResponse collectGarbage() = 0;
    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse getHeapObjectId(const String& in_objectId, String* out_heapSnapshotObjectId) = 0;
    virtual DispatchResponse getObjectByHeapObjectId(const String& in_objectId, Maybe<String> in_objectGroup, std::unique_ptr<protocol::Runtime::RemoteObject>* out_result) = 0;
    virtual DispatchResponse getSamplingProfile(std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfile>* out_profile) = 0;
    virtual DispatchResponse startSampling(Maybe<double> in_samplingInterval) = 0;
    virtual DispatchResponse startTrackingHeapObjects(Maybe<bool> in_trackAllocations) = 0;
    virtual DispatchResponse stopSampling(std::unique_ptr<protocol::HeapProfiler::SamplingHeapProfile>* out_profile) = 0;
    virtual DispatchResponse stopTrackingHeapObjects(Maybe<bool> in_reportProgress) = 0;
    virtual DispatchResponse takeHeapSnapshot(Maybe<bool> in_reportProgress) = 0;

};

// ------------- Frontend interface.

class  Frontend {
public:
    explicit Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void addHeapSnapshotChunk(const String& chunk);
    void heapStatsUpdate(std::unique_ptr<protocol::Array<int>> statsUpdate);
    void lastSeenObjectId(int lastSeenObjectId, double timestamp);
    void reportHeapSnapshotProgress(int done, int total, Maybe<bool> finished = Maybe<bool>());
    void resetProfiles();

    void flush();
    void sendRawNotification(const String&);
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class  Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class  Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace HeapProfiler
} // namespace v8_inspector
} // namespace protocol

#endif // !defined(v8_inspector_protocol_HeapProfiler_h)
